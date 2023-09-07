#pragma once
#include <sys/epoll.h>
#include "ThreadPool.h"

class ReactorBase{
public:
    ReactorBase(){}
    virtual ~ReactorBase(){}
    //virtual void AddFd(int epoll_fd,int fd, ThreadPool &pool) = 0;
    virtual void RemoveFd(int epoll_fd,int fd) = 0;
    virtual void EventLoop(int epoll_fd) = 0;

    void create_epoll(){
        epoll_fd = epoll_create(1);
    }

    void close_epoll(int epoll_fd){
        close_epoll(epoll_fd);
    }
private:
    int epoll_fd;
};