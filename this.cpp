#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int id; // id1
    int salary;
    string name;

    A(int id, string name, int salary)
    {
        this->id = id;         // object id (id1) ke andar hm input id co copy kar rhe hai
        this->name = name;     // same here
        this->salary = salary; // also this pointer point to the object  which executes a member function
        //  this poointer points to the address of the current object
    }
};

int main()
{

    return 0;
}