#ifndef DOG_HPP_
#define DOG_HPP_

#include <string>
#include <iostream>

class Dog {
public:
    explicit Dog(const std::string &dogName);
    Dog() = default;
    ~Dog();
    std::string get_name() const;
    void set_dog_name(const std::string &name);
	void print_info() const;
private:
    std::string _dog_name {"Puffy"};
};


#endif // DOG_HPP_