//this pointer
#include <iostream>

using namespace std;

class Animal {
public:
  virtual void speak() {
    cout << "Animal sound from " << this << endl;
  }
};

class Dog : public Animal {
public:
  void speak() override {
    cout << "Woof! from " << this << endl;
  }
};

int main() {
  Animal *animal = new Dog();
  animal->speak(); // Calls Dog::speak() and prints the address of the Dog object

  // Don't forget to free the memory to prevent memory leaks
  delete animal;

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:6.3";
    fflush(stdin);
    cin.get();
  return 0;
}