#pragma once
#include "ReactorBase.h"

class SubReactor:public ReactorBase
{
public:
    SubReactor();
    ~SubReactor();
    void AddSubFd(int epoll_fd,int fd,uint32_t events,ThreadPool &pool);
    virtual void RemoveFd(int epoll_fd,int fd);
    virtual void EventLoop(int epoll_fd);
private:
    void EpollCtl(int epoll_fd,int fd, int op, uint32_t events);
};


