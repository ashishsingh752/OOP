#include <iostream>
using namespace std;

class Human
{
private:
    int xl;

public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }

    void setheight(int h)
    {
        this->height = h;
    }
};

class male : protected Human
{
public:
    string color;

    int getHeight()
    {
        return this->height; // by maing this we can accces height outside of the class bcs it is protected then we can not use it outside of the
                             // without making in the child class.
                             // a protected data member can be accesible inside own class and outside through child class
                             // Note: here if we make the height private in the parent class(human)  then with any access modifier we can not access it in the child class
    }
};

int main()
{

    male m1;
    //  cout<<m1.height<<endl; // we can't access height directly outside of the class because it is protected

    cout << m1.getHeight() << endl; // but we can access with the help of the child class where we can use getter and setter.
    // cout<<m1.height<<endl;

    // male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.color<<endl;

    // object1.setheight(159);
    // cout<<object1.height<<endl;

    return 0;
}