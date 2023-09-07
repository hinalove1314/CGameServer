#pragma once
#include <queue>
#include <mutex>

#include <mysql/mysql.h>
#include <mysql_driver.h>
#include <mysql_connection.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

class ConnectionPool {
public:
    ConnectionPool(int size);
    MYSQL* getConnection();
    void releaseConnection(MYSQL* conn);
private:
    std::queue<MYSQL*> connections;
    std::mutex mutex;
};
