#pragma once
#include <thread>
#include <vector>
#include <queue>
#include <functional>
#include <mutex>
#include <condition_variable>

using ThreadTask = std::function<void()>;

class ThreadPool {
public:
    ThreadPool(int thread_num = 0,int tasks_num = -1);
    ~ThreadPool();
    bool AddTask(ThreadTask task);
    static void ThreadPoolWorker(ThreadPool* ptr);//static关键字在类的成员函数中的作用是让该函数能够在没有创建类的对象的情况下被调用。这些静态成员函数可以直接通过类名来调用
    bool Start();
    void CreateThreads();
    void DestroyPool();
private:
    std::vector<std::thread>threads; //work thread
    std::queue<ThreadTask>tasks; //task queue
    std::mutex tasks_guard;//task queue lock
    std::condition_variable tasks_event;
    bool is_running;//threadpool is running?
    int max_threads;//the biggest number of threads
    int max_tasks;  //the biggest number of tasks queue
};