/*Test the People class.*/
#include "People.h"
int main(int argc, char const *argv[])
{
    People person1("John", 21);
    person1.printInfo();
    People person2("Jane", 22);
    person2.printInfo();
    // Add new people
    People person3("Alice", 23);
    person3.printInfo();
    People person4("Bob", 24);
    person4.printInfo();
    People person5("Charlie", 25);
    person5.printInfo();
    // Add new people
    People person6("David", 26);
    person6.printInfo();
    // Add new people Ahyet
    People person7("Eve", 27);
    person7.printInfo();
    People person8("Frank", 28);
    person8.printInfo();
    return 0;
}