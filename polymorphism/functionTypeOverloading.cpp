#include <iostream>
using namespace std;

/*
Function overloading is a feature in C++ that allows multiple functions to have the 
same name, as long as they have different signatures. A function's signature is defined 
by the number and types of its parameters. This capability is an example of static polymorphism, 
also known as compile-time polymorphism, where the function to be invoked is determined 
at compile time based on its signature.

In essence, function overloading enables a single function name to be used for 
different operations, depending on the context in which it is called. 
This enhances code readability and maintainability by allowing functions to perform 
similar tasks with varying inputs, all under a unified name.
*/

class FuntionOverloading{
    public:
    void print(int a){
        cout<<"This is the integer value: "<<a<<endl;
    }
    int print(double a, int b){
        cout<<"This is the double value: "<<a<<endl;
        return  0;
    }
    int print(int b, double a){
        cout<<"This is the character value: "<<a<<endl;
        return 1;
    }
};

int main()
{
    FuntionOverloading obj1;
    obj1.print(5);

    return 0;
}