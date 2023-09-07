#include "../include/DataBase.h"

ConnectionPool::ConnectionPool(int size) {
    for(int i = 0; i < size; i++) {
        MYSQL *conn = mysql_init(NULL);
        if(mysql_real_connect(conn, "localhost", "root", "22880989", "cGameServer", 0, NULL, 0)) {
            connections.push(conn);
            std::cout<<"success connect!"<<std::endl;
        } else {
            std::cerr << "Failed to connect: " << mysql_error(conn) << std::endl;
        }       
    }
}

MYSQL* ConnectionPool::getConnection() {
    std::lock_guard<std::mutex> lock(mutex);
    if(connections.empty()) {
        // Wait or return nullptr
        return nullptr;
    }
    MYSQL* conn = connections.front();
    connections.pop();
    return conn;
}

void ConnectionPool::releaseConnection(MYSQL* conn) {
    std::lock_guard<std::mutex> lock(mutex);
    connections.push(conn);
}