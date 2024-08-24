#include <iostream>
using namespace std;

class A
{
public:
    void print()
    { // same function in the 2 or more base function
        cout << "printing for the class A" << endl
             << endl;
    }
};

class B
{
public:
    void print()
    {
        cout << "printing for the class B" << endl
             << endl;
    }
};
class C : public A, public B
{
public:
    void print1()
    {
        cout << "printing for the class c" << endl
             << endl;
    }
};

int main()
{

    C obj1;
    obj1.print1();
    // obj1.print()  // it is ambiguous for the C so we have to access the data as below
    obj1.A::print();
    obj1.B::print();

    return 0;
}