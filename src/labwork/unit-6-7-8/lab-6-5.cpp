#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }

    // Overloaded function
    void calculateArea(int side) {
        cout << "Area of the shape with side " << side << " is " << side * side << endl;
    }

    void calculateArea(int length, int width) {
        cout << "Area of the shape with length " << length << " and width " << width << " is " << length * width << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Overriding the draw function
    void draw() override {
        cout << "Drawing a circle." << endl;
    }

    // Overloaded function
    void calculateArea(int radius) {
        cout << "Area of the circle with radius " << radius << " is " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* shape = new Shape();
    shape->draw();  // Output: Drawing a shape.
    shape->calculateArea(5);  // Output: Area of the shape with side 5 is 25
    shape->calculateArea(4, 5);  // Output: Area of the shape with length 4 and width 5 is 20

    Circle* circle = new Circle();
    circle->draw();  // Output: Drawing a circle.
    circle->calculateArea(3);  // Output: Area of the circle with radius 3 is 28.26

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:6.5";
    fflush(stdin);
    cin.get();
    return 0;
}