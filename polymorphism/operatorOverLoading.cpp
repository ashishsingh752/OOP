#include<bits/stdc++.h>
using namespace std;

/*
 * Operator Overloading Overview
 *
 * Operator overloading in C++ allows us to define custom behavior for operators when applied to user-defined types such as classes or structs. This feature is a type of compile-time polymorphism, where the specific function to be executed is determined at compile time based on the operator and its operands.
 *
 * Key Points:
 * 1. **Purpose**: Operator overloading provides a way to extend the functionality of standard operators (e.g., +, -, *, /) to work with custom data types. This can make operations involving these types more intuitive and readable.
 *
 * 2. **Functionality**: By defining custom behaviors for operators, we can use familiar symbols with user-defined types, which can improve the expressiveness and maintainability of the code. For example, overloading the + operator allows for natural addition of complex numbers or matrices.
 *
 * 3. **Implementation**:
 *    - **Member Function**: Operators can be overloaded as member functions of the class. This allows the operator to be directly applied to instances of the class.
 *    - **Non-Member Function**: Operators can also be overloaded as non-member functions, which is useful when the left-hand operand is not an instance of the class.
 *
 * 4. **Restrictions**: Not all operators can be overloaded. Operators such as the scope resolution operator (::), the member access operator (.), and the member pointer operator (.*) cannot be overloaded.
 *
 * Benefits:
 * - **Enhanced Readability**: Overloaded operators enable more intuitive and concise code, aligning with natural mathematical or logical operations.
 * - **Consistency**: It ensures that operations on user-defined types are consistent with their intended functionality and behavior.
 *
 * In this file, operator overloading has been implemented for [briefly describe the custom data types and operators being overloaded]. Ensure that the overloaded operators are used correctly and maintain expected behavior for the custom types.
 */

class B {
    public: 
    int a; 
    int b; 
    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){  // here we are using + operator to work as - operator
        int val = this->a; 
        int val2 = obj.a;
        cout<<"difference is "<<val-val2<<endl;
    }

    void operator() (){
        cout<<"this is a function call operator"<<endl;
    }

};

int main(){
    B obj1, obj2;
    obj1.a = 10; 
    obj2.a = 15;
    obj1+obj2;  
    obj2(); 
    obj1(); 


    return 0;
}