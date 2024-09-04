#include <iostream>
using namespace std;

// Abstract base class Calculator with a pure virtual function calculate()
class Calculator {
public:
    // Pure virtual function calculate() that must be overridden by derived classes
    virtual int calculate(int num1, int num2) = 0;
};

// Derived class ArithmeticCalculator that inherits from Calculator
class ArithmeticCalculator : public Calculator {
public:
    // Function overriding: overriding the calculate() function from the base class
    // This function will be called when we use the Calculator pointer to an ArithmeticCalculator object
    int calculate(int num1, int num2) override {
        return num1 + num2; // default calculation is sum
    }

    // Function overloading: providing an additional calculate() function with a different signature
    // This function takes an additional char argument to specify the operation
    int calculate(int num1, int num2, char operation) {
        if (operation == '+') {
            return num1 + num2;
        } else if (operation == '-') {
            return num1 - num2;
        } else {
            cout << "Error: Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    // Create a Calculator pointer to an ArithmeticCalculator object
    Calculator* calculator = new ArithmeticCalculator();
    int result = calculator->calculate(5, 3); // Output: 8 (default sum, using the overridden function)
    cout << "Result: " << result << endl;

    // Cast the Calculator pointer to an ArithmeticCalculator pointer to access the overloaded function
    ArithmeticCalculator* arithmeticCalculator = static_cast<ArithmeticCalculator*>(calculator);
    result = arithmeticCalculator->calculate(5, 3, '+'); // Output: 8 (sum, using the overloaded function)
    cout << "Result: " << result << endl;
    result = arithmeticCalculator->calculate(5, 3, '-'); // Output: 2 (difference, using the overloaded function)
    cout << "Result: " << result << endl;
    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:6.5";
    fflush(stdin);
    cin.get();
    return 0;
}