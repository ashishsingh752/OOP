
/*
 * Abstraction Overview
 *
 * Abstraction is a fundamental concept in object-oriented programming (OOP) that involves simplifying complex 
 * systems by modeling classes based on the essential characteristics and behaviors relevant to the problem at hand, 
 * while hiding unnecessary details.
 *
 * Key Concepts:
 * 1. **Definition**:
 *    - **Abstraction** refers to the process of exposing only the relevant attributes and behaviors of an object while hiding the internal implementation details.
 *        This allows for a simplified interaction with complex systems or objects.
 *    - It helps in focusing on what an object does rather than how it does it, which improves code readability and maintainability.
 *
 * 2. **Purpose**:
 *    - **Encapsulation**: Abstraction supports encapsulation by grouping related data and methods into a class and exposing only necessary details. 
 *       This hides the complexity and protects the internal state of an object from unauthorized access.
 *    - **Interface Design**: It allows for designing and interacting with objects through abstract interfaces, 
 *        making it easier to understand and use complex systems without needing to understand their internal workings.
 *
 * 3. **Implementation**:
 *    - **Abstract Classes**: An abstract class in C++ is a class that contains at least one pure virtual function. 
 *       It cannot be instantiated directly and is used as a base class for other classes. Abstract classes provide a common interface for derived classes to implement.
 * 
 * 4. **Benefits**:
 *    - **Simplification**: Abstraction simplifies complex systems by allowing interaction with objects at a high level, focusing on what they do rather than how they achieve it.
 *    - **Flexibility**: It provides a way to define common interfaces for different types of objects, facilitating flexibility and interchangeability in code.
 *    - **Maintenance**: By hiding implementation details, abstraction makes it easier to modify or extend the internal workings of a class without affecting the code that uses it.
 */


#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;

    // Pure virtual function for calculating perimeter
    virtual double perimeter() const = 0;

    // Virtual destructor for proper cleanup of derived class objects
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double r;

public:
    // Constructor to initialize radius
    Circle(double rad) : r(rad) {}

    // Implementation of area calculation for a circle
    double area() const override {
        return 3.14159 * r * r;
    }

    // Implementation of perimeter calculation for a circle
    double perimeter() const override {
        return 2 * 3.14159 * r;
    }
};

// Derived class for a Rectangle
class Rectangle : public Shape {
private:
    double w, h;

public:
    // Constructor to initialize width and height
    Rectangle(double wid, double hei) : w(wid), h(hei) {}

    // Implementation of area calculation for a rectangle
    double area() const override {
        return w * h;
    }

    // Implementation of perimeter calculation for a rectangle
    double perimeter() const override {
        return 2 * (w + h);
    }
};

// Function to print the details of a shape
void printShapeDetails(const Shape &s) {
    cout << "Area: " << s.area() << endl;
    cout << "Perimeter: " << s.perimeter() << endl;
}

int main() {
    // Creating objects of derived classes
    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    // Using the base class pointer to access derived class objects
    printShapeDetails(c);
    printShapeDetails(r);

    return 0;
}
