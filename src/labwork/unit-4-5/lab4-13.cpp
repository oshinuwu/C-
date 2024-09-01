/*C++ Program to Convert from one class type to another class
type[destination].*/
#include <iostream>
using namespace std;

// Class 1
class ClassA {
    private:
        int value;
    public:
        // Constructor
        ClassA(int val) {
            value = val;
        }
        // Getter function
        int getValue() {
            return value;
        }
};

// Class 2
class ClassB {
    private:
        int value;
    public:
        // Constructor
        ClassB(int val) {
            value = val;
        }
        // Getter function
        int getValue() {
            return value;
        }
};

// Conversion function from ClassA to ClassB
ClassB convertToClassB(ClassA objA) {
    return ClassB(objA.getValue());
}

int main() {
    // Create an object of ClassA
    ClassA objA(10);
    
    // Convert objA to ClassB
    ClassB objB = convertToClassB(objA);
    
    // Print the value of objB
    cout << "Value of objB: " << objB.getValue() << endl;
    
     cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:4.13";
    fflush(stdin);
    cin.get();
    return 0;
}