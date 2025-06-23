#include <iostream>
#include "log.hpp"

static std::map<const LogType, std::string> _g_prefixes = {
    {LogType::MESSAGE, "Message: "}
    , {LogType::WARNING, "Warning: "}
    , {LogType::FATAL_ERROR, "Fatal Error: "}
};

void log_data(const char *message, LogType lt) {
    auto value = ((10 <=> 20) > 0);

    auto it = _g_prefixes.find(lt);
    if (it == _g_prefixes.end()) {
        return ;
    }
    std::cout << it->second << message << std::endl;
}