/*Test the People class.*/
#include "People.h"
int main(int argc, char const *argv[])
{
    People person1("John", 21);
    person1.printInfo();
    People person2("Jane", 22);
    person2.printInfo();
    return 0;
}