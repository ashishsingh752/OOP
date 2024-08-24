#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "function 1 is called" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "function 2 is called" << endl;
    }
};

class C : public B
{
public:
    void func3()
    {
        cout << "function 3 is called" << endl;
    }
};

class D : public C
{ // its like a tree branching and through on breance we can reach to its root, Here root is A
public:
    void func4()
    {
        cout << "function 4 is called" << endl;
    }
};

int main()
{
    D object4;
    object4.func2();
    return 0;
}