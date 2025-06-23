#include "dog.hpp"

Dog::Dog(const std::string &name) : _dog_name{ name } {
    std::cout << "Constructor for Dog " << _dog_name << " called." << std::endl;
}

std::string Dog::get_name() const {
    return _dog_name;
}

void Dog::set_dog_name(const std::string &dogName) {
    _dog_name = dogName;
}

void Dog::print_info() const {
    std::cout << "Dog [ name : " << _dog_name << " ]" <<  std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor of dog " << _dog_name << " called" << std::endl;
}

