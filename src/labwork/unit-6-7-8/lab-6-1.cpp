//early binding
#include <iostream>
using namespace std;

class Animal {
public:
  void speak() {
    cout << "Animal sound\n";
  }
};

class Dog : public Animal {
public:
  void speak() {
    cout << "Woof!\n";
  }
};

int main() {
  Animal *animal = new Dog(); // Pointer of type Animal points to a Dog object
  animal->speak(); // Calls Animal::speak() since it's statically bound

  Dog *dog = new Dog();
  dog->speak(); // Calls Dog::speak()
    
    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:6.1";
    fflush(stdin);
    cin.get();
  return 0;
}