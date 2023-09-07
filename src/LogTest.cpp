#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>

int main() {
    // 创建一个向文件 "logs/my_log.txt" 写入的日志器
    auto file_logger = spdlog::basic_logger_mt("file_logger", "/home/wang/workspace/project/CGameServer/logs/my_log.txt");

    // 使用这个日志器
    file_logger->info("This is an info message and it will be written to the file");
    file_logger->warn("This is a warning message");
    file_logger->error("An error occurred!");

    return 0;
}