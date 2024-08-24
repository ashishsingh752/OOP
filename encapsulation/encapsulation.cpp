#include<bits/stdc++.h>
using namespace std;

// Encapsulation is the process of wrapping up of data and functions into a single unit called class.
// Encapsulation is used to hide the values or state of a structured data object inside a class, preventing
// unauthorized parties' direct access to them.
// Encapsulation is used to restrict direct access to some of the object's components. Making it read-only.
// Encapsulation is used to prevent the accidental modification of data.


class Student {
    private: {
        int age; 
        int height;
        string name; 
        public: 
        int getAge(){
            return this->age;
        }
    }
};

int main(){
    
    return 0;
}