#pragma once
//#include <MainReactor.h>
#include <iostream>
#include "../include/MainReactor.h"
#include <sys/types.h>
#include <sys/socket.h>

MainReactor::MainReactor(/* args */){
}

MainReactor::~MainReactor(){
}

void MainReactor::AddMainFd(int epoll_fd,int fd, ThreadPool &pool){
    std::cout<<"AddMainFd"<<std::endl;
    EpollCtl(epoll_fd,fd, EPOLL_CTL_ADD, EPOLLIN);
}

void MainReactor::RemoveFd(int epoll_fd,int fd){
    EpollCtl(epoll_fd,fd,EPOLL_CTL_DEL,0);
}

void MainReactor::EventLoop(int epoll_fd){
    while(true){
        struct epoll_event events[10];
        int nfds = epoll_wait(epoll_fd,events,10,-1);
        for(int i=0;i<nfds;i++){
            if(events[i].events && EPOLLIN){
                int connfd = accept(events[i].data.fd, nullptr, nullptr);

            }
        }
    }
}

void MainReactor::EpollCtl(int epoll_fd,int fd, int op, uint32_t events){
    struct epoll_event ev;
    ev.data.fd = fd;
    ev.events = events;
    epoll_ctl(epoll_fd, op, fd, &ev);
}