class Student: public Person
{
private:
    /*data*/
public:
    Student(/* args */);
    ~Student();
};

Student::Student(/* args */)
{
    // Print out the name and age of the student
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

Student::~Student()
{
}