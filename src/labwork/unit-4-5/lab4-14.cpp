/*C++ Program to Convert from one class type to another class
type[source].*/
#include <iostream>
using namespace std;
// Class 2
class ClassB
{

public:
    int value;
    // Constructor
    ClassB(int val)
    {
        value = val;
    }
    // Getter function
    int getValue()
    {
        return value;
    }
};

// Class 1
class ClassA
{
private:
    int value;

public:
    ClassA(ClassB &objB)
    {
        objB.value = value;
    }
    // Getter function
    int getValue()
    {
        return value;
    }
};

int main()
{
    // Create an object of ClassA
    ClassA objA(ClassB objB);

    // Convert objA to ClassB
    ClassB objB(25);

    // Print the value of objB
    cout << "Value of objB: " << objB.getValue() << endl;

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.12";
    fflush(stdin);
    cin.get();
    return 0;
}