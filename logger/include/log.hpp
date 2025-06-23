#ifndef LOG_HPP_
# define LOG_HPP_

#include <map>

enum class LogType {
    MESSAGE,
    WARNING,
    FATAL_ERROR
};
void log_data(const char *message, LogType lt);

#endif // LOG_HPP_