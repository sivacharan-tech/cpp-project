#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:

    // Default Constructor
    Student()
    {
        name = "Unknown";
        age = 0;

        cout << "Default Constructor called" << endl;
    }

    // Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;

        cout << "Parameterized Constructor called" << endl;
    }

    // Constructor with only one parameter
    Student(string n)
    {
        name = n;
        age = -1;

        cout << "Single Parameter Constructor called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Default constructor
    Student s1;
    s1.display();

    // Parameterized constructor
    Student s2("Rahul", 20);
    s2.display();

    // Constructor with single parameter
    Student s3("Priya");
    s3.display();

    return 0;
}
