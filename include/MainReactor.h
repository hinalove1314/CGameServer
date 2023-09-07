#pragma once
#include "ReactorBase.h"
#include "SubReactor.h"

class MainReactor:public ReactorBase
{
public:
    MainReactor();
    ~MainReactor();
    void AddMainFd(int epoll_fd,int fd, ThreadPool &pool);
    virtual void RemoveFd(int epoll_fd,int fd);
    virtual void EventLoop(int epoll_fd);
    void AddSubReactor(SubReactor *subReactor);
private:
    void EpollCtl(int epoll_fd,int fd, int op, uint32_t events);
};


