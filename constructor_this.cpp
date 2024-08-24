#include <iostream>
using namespace std;

class Hero
{
private:
    int health; // h1

public:
    char level; // h1
    int a = 1234;

    // simple constructor

    Hero()
    { // created a new simple constructor, if it is not created then there is a default constructor
        cout << "contructor is called" << endl;
        a = 10;
    }

    Hero(int health, char level)
    {
        this->health = health; // yenha h1  (object ki health) health ke andar hm "health"(input ki health) ko copy kar rhe
        this->level = level;   // same here , object ke level ke andar hm input ke level ko copy kar rhe hai
    }

    void print()
    {
        cout << "health is " << this->health << endl;
        cout << "level is " << this->level << endl;
    }

    // copy constructor

    Hero(Hero &temp)
    { // here it is  passed by refrence because if it is  passed by value  then it will be in an infinite loop
      // because everytime
        cout << "copy constructor is called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
};

int main()
{

    // cout<<"hii"<<endl;
    Hero ashish;

    cout << ashish.a << endl;
    // cout<<"Hello Ashish"<<endl;
    Hero Ashish(70, 'b');
    Ashish.print();

    Hero Vibhaw(Ashish);
    Vibhaw.print();

    return 0;
}