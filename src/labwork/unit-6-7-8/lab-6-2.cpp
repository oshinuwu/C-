/* perform the implementation of virtual function, pure virtual function (abstract class), concrete class
and virtual class with practical codes in c++.*/
#include <iostream>

using namespace std;

// Abstract base class Shape with pure virtual functions
class Shape {
public:
    // Pure virtual function to draw a shape
    virtual void draw() = 0;
};

// Concrete class Circle that inherits from Shape
class Circle : public Shape {
public:
    // Override the draw function to draw a circle
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Concrete class Rectangle that inherits from Shape
class Rectangle : public Shape {
public:
    // Override the draw function to draw a rectangle
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    // Create a Shape pointer and point it to a Circle object
    Shape* shape = new Circle();
    shape->draw(); // Output: Drawing a circle.

    // Point the Shape pointer to a Rectangle object
    shape = new Rectangle();
    shape->draw(); // Output: Drawing a rectangle.
     cout << "\nName: Oshin Pant Roll NO:23 Lab_no:6.2";
    fflush(stdin);
    cin.get();
    return 0;
}