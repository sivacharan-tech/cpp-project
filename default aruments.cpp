#include <iostream>
using namespace std;

void greet(string name = "Guest", int times = 1)
{
    for (int i = 0; i < times; i++)
    {
        cout << "Hello, " << name << "!" << endl;
    }
}

int main()
{
    // No arguments
    greet();

    // One argument
    greet("Anil");

    // Two arguments
    greet("Ravi", 3);

    return 0;
}
