#include <iostream>
#include <string>
class People
{
private:
    std::string name;
    int age;
public:
    People(std::string name, int age);
    void printInfo();
    ~People();
};

