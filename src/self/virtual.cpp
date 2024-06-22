#include <iostream>
// Base class
class Number {
public:
    virtual int getValue() {
        return 0;
    }
};
// Derived class 1: One
class One : public Number {
public:
    int getValue() override {
        return 1;
    }
};
// Derived class 2: Two
class Two : public Number {
public:
    int getValue() override {
        return 2;
    }
};
// Derived class 3: Three
class Three : public Number {
public:
    int getValue() override {
        return 3;
    }
};

int main() {
    Number* number = new Number();
    One* one = new One();
    Two* two = new Two();
    Three* three = new Three();

    // Polymorphism: calling the virtual function through the base class pointer
    number->getValue();  // returns 0
    number = one;
    std::cout << "One: " << number->getValue() << std::endl;  // outputs "One: 1"
    number = two;
    std::cout << "Two: " << number->getValue() << std::endl;  // outputs "Two: 2"
    number = three;
    std::cout << "Three: " << number->getValue() << std::endl;  // outputs "Three: 3"

    // Clean up
    delete number;
    delete one;
    delete two;
    delete three;

    std::cin.get();
    return 0;
}