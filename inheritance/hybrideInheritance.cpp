#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "yous height is a:" << endl;
    }
};
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

class B
{
public:
    int height;
    void h2B()
    {
        cout << "yous height is d: " << endl;
    }
};

class C : public A
{
};

class D : public A, public B
{
};
// class C: public A, public D {
//     public:

//     int height;

//     displayCAD(){
//         cout<<"yous height is a and d: "<<endl;
//     }
// };

int main()
{

    D height1;

    // height1.displayCA();

    return 0;
}

// #include <iostream>
// using namespace std;
// // Parent class1
// class Vehicle {
//     public:
//     Vehicle() {
//         cout << "This is a Vehicle" << endl;
//         }
//     };
//     //Parent class2
//     class Fare {
//         public: Fare() {
//              cout << "Fare of Vehicle\n";
//               }
//         };
//      //Child class1
//      class Car: public Vehicle {

//      };
//  //Child class2
//  class Bus: public Vehicle, public Fare {

//   };

//   // main function
// int main() {
// // creating object of sub class will
// // invoke the constructor of base class
// Bus obj2; return 0;
//  }
