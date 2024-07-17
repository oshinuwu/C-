#include <iostream>

class Person {
public:
    std::string name;
    int age;

    // Default constructor
    Person() : name(""), age(0) {}

    Person(std::string n, int a) : name(n), age(a) {}

    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

void swapInts(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Example 1: Swap two integers using pointers
    int x = 5;
    int y = 10;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    swapInts(&x, &y);

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    // Example 2: Demonstrate the difference between * and &
    int z = 20;
    int* p = &z;

    std::cout << "Value of z: " << z << std::endl;
    std::cout << "Address of z: " << &z << std::endl;
    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Value pointed to by p: " << *p << std::endl;

    // Example 3: Create space for an array of Person objects using pointers
    Person* people = new Person[3];

    // Initialize the Person objects
    people[0] = Person("abc", 25);
    people[1] = Person("xyz", 30);
    people[2] = Person("pqr", 35);

    // Use the Person objects
    for (int i = 0; i < 3; i++) {
        people[i].printInfo();
    }

    // Don't forget to delete the array when you're done with it!
    delete[] people;

    std::cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:16";
    fflush(stdin);
    std::cin.get();
    return 0;
}