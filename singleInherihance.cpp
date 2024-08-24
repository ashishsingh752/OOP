#include <iostream>
using namespace std;

class animal
{
public:
    int age;

protected:
    int weight;
};

class Dog : public animal
{

public:
    string color;

    void setWeight(int c)
    {
        weight = c;
    }

    int getWeight()
    {
        return ++weight; // here we can see that weight is a datamember of animal class and we are performing operation in the child class
    }
    void print()
    {
        cout << "it is its weight" << endl;
    }
};

int main()
{
    Dog d1;

    d1.setWeight(34);
    cout << d1.getWeight() << endl;

    d1.age;
    d1.print();

    return 0;
}