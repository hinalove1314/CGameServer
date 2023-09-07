#include <sys/epoll.h>
#include <sys/socket.h>
#include "../include/ThreadPool.h"
#include "../include/SubReactor.h"
#include "Conn.cpp"
#include "MainReactor.cpp"
#include "SubReactor.cpp"
#include "ThreadPool.cpp"

int main() {
    int mainReactorFd = epoll_create(1);  // 创建主反应器的 epoll 描述符
    int subReactorFd = epoll_create(1);   // 创建子反应器的 epoll 描述符

    // 创建一个线程池
    ThreadPool pool;

    // 创建主反应器实例
    MainReactor mainReactor;

    // 创建子反应器实例
    SubReactor subReactor;

    // 将子反应器添加到主反应器中
    //mainReactor.AddSubReactor(&subReactor);

    // 创建并启动监听套接字
    int listen_fd = socket(AF_INET, SOCK_STREAM, 0);
    // 这里还需要对listen_fd进行一些设置，比如设置非阻塞，设置地址重用等

    // 添加监听套接字到主反应器中
    mainReactor.AddMainFd(mainReactorFd,listen_fd,pool);

    // 开启事件循环
    mainReactor.EventLoop(mainReactorFd);

    return 0;
}
