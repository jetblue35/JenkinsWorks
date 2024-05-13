#include "People.h"

People::People(std::string name, int age)
{
    this->name = name;
    this->age = age;
}
People::~People()
{
    std::cout << "Destructor called" << std::endl;
}
void People::printInfo()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "----------------" << std::endl;
}
void People::setAge(int age)
{
    this->age = age;
}
