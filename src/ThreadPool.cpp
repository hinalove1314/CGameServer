//#include "ThreadPool.h"
#include "../include/ThreadPool.h"
#include <iostream>

ThreadPool::ThreadPool(int thread_num,int tasks_num){
    if(thread_num == 0){
        max_threads = std::thread::hardware_concurrency();
    }else{
        max_threads = thread_num;
    }

    max_tasks = tasks_num;
    is_running = false; //init false;
}

ThreadPool::~ThreadPool(){
    DestroyPool();
}

void ThreadPool::DestroyPool(){
    if(is_running == false){
        return;
    }

    is_running = false;
    tasks_event.notify_all();//make all threads not wait

    for(auto &t:threads){
        t.join(); //wait every done execute,then destroy threads
    }

    threads.clear();
}

void ThreadPool::ThreadPoolWorker(ThreadPool* ptr){
    if(ptr == nullptr)
    {
        return; 
    }

    while( ptr -> is_running || !ptr->tasks.empty()){
        ThreadTask task;
        std::unique_lock<std::mutex> lock(ptr->tasks_guard);
        while(ptr -> tasks.empty()){
            ptr -> tasks_event.wait(lock);
        }

        task = ptr -> tasks.front();
        ptr->tasks.pop();

        task();//run function
    }
}

bool ThreadPool::Start(){
    if(is_running){
        std::cout<<"is_running is already true"<<std::endl;
        return false;
    }

    is_running = true;

    if(threads.empty()){
        CreateThreads(); 
    }

    return true;
}

void ThreadPool::CreateThreads(){
    for(int i=0;i<max_threads;i++){
        threads.push_back(std::thread(&ThreadPool::ThreadPoolWorker,this));
    }
}

//Add Task to task queue
bool ThreadPool::AddTask(ThreadTask task){
    std::unique_lock<std::mutex> lock(tasks_guard);

    if(max_tasks == -1){
        tasks.push(task);
    }else{
        if(tasks.size() >= max_tasks){
            return false;
        }else{
            tasks.push(task);
        }
    }
    
    tasks_event.notify_one();

    return true;
}