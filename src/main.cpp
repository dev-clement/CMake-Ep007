#include <iostream>
#include "dog.hpp"
#include "operations.hpp"
#include "log.hpp"

int main() {
    double result = add(2, 70);
    std::cout << "Result: " << result << std::endl;

    Dog dog1("Flitzy");
    dog1.print_info();

    log_data("Hello There", LogType::FATAL_ERROR);
    log_data("Im Clement", LogType::WARNING);
    log_data("Check if that works well or not !!!", LogType::MESSAGE);

    return EXIT_SUCCESS;
}