/*
 * Method Overriding Overview
 *
 * Method overriding is a concept related to inheritance in object-oriented programming. 
 * It is a form of runtime polymorphism (also known as dynamic polymorphism) where the specific 
 * method that gets executed is determined at runtime based on the type of the object.
 *
 * Key Points:
 * 1. **Inheritance**: 
 * Method overriding works only with inheritance. It allows a derived class to provide a 
 * specific implementation of a method that is already defined in its base class.
 *
 * 2. **Runtime Polymorphism**: 
 * Unlike compile-time polymorphism (e.g., function overloading), method overriding enables runtime 
 * polymorphism. The actual method to be invoked is resolved during runtime based on the object's type.
 *
 * 3. **Function Behavior**:
 *    - **Base Class Method**: If a method is defined in the base class and is not overridden in the derived class, calling this method on an object of the derived class will execute the base class's version of the method.
 *    - **Overridden Method**: If the derived class provides its own implementation of a method with the same name and signature as in the base class, calling this method on an object of the derived class will execute the derived class's version of the method.
 *
 * 4. **Dynamic Polymorphism**: 
 * This form of polymorphism is also known as dynamic polymorphism because the method to be executed is 
 * determined dynamically at runtime rather than at compile time.
 *
 */

#include<bits/stdc++.h>
using namespace std; 


class Animal{
    public:
     void sound(){
        cout<<"Animal sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound(){
        cout<<"Dog sound"<<endl;
    }
};




int main(){
    Dog obj1;
    obj1.sound();
    return 0;
}

