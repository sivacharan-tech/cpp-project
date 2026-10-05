#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    Box(int l)
    {
        length = l;
    }

    // Declaration of friend function
    friend void showLength(Box b);
};

// Definition of friend function
void showLength(Box b)
{
    cout << "Length of the box = " << b.length << endl;
}

int main()
{
    Box b1(25);

    showLength(b1);   // Friend function accessing private member

    return 0;
}
