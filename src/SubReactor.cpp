#include "../include/SubReactor.h"
#include "../include/ThreadPool.h"

SubReactor::SubReactor(/* args */){

}

SubReactor::~SubReactor(){

}

void SubReactor::AddSubFd(int epoll_fd,int fd,uint32_t events,ThreadPool &pool){
     // 添加任务到线程池
    pool.AddTask(std::bind(&SubReactor::EpollCtl, this, epoll_fd, fd, EPOLL_CTL_ADD, events));
}

void SubReactor::RemoveFd(int epoll_fd,int fd){
    EpollCtl(epoll_fd,fd,EPOLL_CTL_DEL,0);
}

void SubReactor::EventLoop(int epoll_fd){
    while (true) {
        struct epoll_event events[10];
        int nfds = epoll_wait(epoll_fd, events, 10, -1);
        for (int i = 0; i < nfds; i++) {
            // 在从Reactor中处理I/O事件
            if (events[i].events & EPOLLIN) {
                // read data
            }
            if (events[i].events & EPOLLOUT) {
                // write data
            }
        }
    }
}

void SubReactor::EpollCtl(int epoll_fd,int fd, int op, uint32_t events){
    struct epoll_event ev;
    ev.data.fd = fd;
    ev.events = events;
    epoll_ctl(epoll_fd, op, fd, &ev);
}

