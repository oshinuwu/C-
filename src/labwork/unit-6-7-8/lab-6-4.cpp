//virtual destructor
#include <iostream>

using namespace std;

class Animal {
public:
  virtual ~Animal() {
    cout << "Animal destructor called\n";
  }
};

class Dog : public Animal {
public:
  ~Dog() {
    cout << "Dog destructor called\n";
  }
};

int main() {
  Animal *animal = new Dog();
  delete animal; // Calls both Animal and Dog destructors

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:6.4";
    fflush(stdin);
    cin.get();
  return 0;
}