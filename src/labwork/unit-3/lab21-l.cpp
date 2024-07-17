#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;
    double x;
    double y;

public:
    Circle(double r, double x, double y) : radius(r), x(x), y(y) {}

    double getRadius() const {
        return radius;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }
};

double calculateArea(const Circle& circle) {
    return M_PI * (circle.getRadius() * circle.getRadius());
}

double calculateCircumference(const Circle& circle) {
    return 2 * M_PI * circle.getRadius();
}

void printCircleInfo(const Circle& circle) {
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Center: (" << circle.getX() << ", " << circle.getY() << ")" << std::endl;
    std::cout << "Area: " << calculateArea(circle) << std::endl;
    std::cout << "Circumference: " << calculateCircumference(circle) << std::endl;
}

int main() {
    Circle circle1(5, 0, 0);
    Circle circle2(10, 3, 4);

    std::cout << "Circle 1:" << std::endl;
    printCircleInfo(circle1);

    std::cout << "\nCircle 2:" << std::endl;
    printCircleInfo(circle2);

    std::cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-l";
    fflush(stdin);
    std::cin.get();
    return 0;
}