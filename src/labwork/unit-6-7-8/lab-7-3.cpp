#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
  virtual void print() = 0;
  virtual ~Base() {} // Virtual destructor
};

template <typename T>
class Derived : public Base<T> {
private:
  T value;
public:
  Derived(T v) : value(v) {}
  void print() override {
    cout << "Value: " << value << endl;
  }
};

int main() {
  Derived<int> intDerived(5);
  Derived<double> doubleDerived(3.14);

  intDerived.print();
  doubleDerived.print();

cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.3";
    fflush(stdin);
    cin.get();
  return 0;
}