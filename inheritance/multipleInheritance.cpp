#include <iostream>
using namespace std;

class animal
{
public:
    int age;
    void print()
    {
        cout << "diffrent animal can have different sound" << endl;
    }
};

class Human
{
public:
    string color;

    void print1()
    {
        cout << "human can speak" << endl;
    }
};

class voice : public animal, public Human
{ // by adding , we can inherite multiple class
private:
    string hu1;
    string an1;

public:
    void setSpeaking(string h1, string a1)
    {
        hu1 = h1;
        an1 = a1;
    }

    string getVoice1()
    {
        return this->an1;
    }
    string getVoice()
    {
        return this->hu1;
    }
};

int main()
{

    voice v;
    v.setSpeaking("'hellow'", "mew");
    cout << v.getVoice() << " " << v.getVoice1() << endl;
    cout << v.getVoice1() << endl;
    v.print();
    v.print1();

    return 0;
}