#include <iostream>
using namespace std;


/*

basic syntax 

class Parent_Class {
    // some code
};

class Child_Class : access_specifier Parent_Class {
    // some code
};




*/
class Human {
    public: 
    int age; 
    int height; 
    int weight;

    public:
    int getAge(){
        return this->age; 
    }

    void setAge(int a){
        this->age = a; 
    }
};

class Male: public Human {
    private:
    string color; 

    public:
    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
    int getHeight(){
        return this->height; 
    }

};



int main()
{
    Male h1;
    h1.sleep();

    return 0;
}