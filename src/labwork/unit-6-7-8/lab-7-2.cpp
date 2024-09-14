#include <iostream>
using namespace std;

template <typename T>
class MyPair {
private:
  T first;
  T second;
public:
  MyPair(T a, T b) : first(a), second(b) {}
  void print() {
    cout << "First: " << first << ", Second: " << second << endl;
  }
};

int main() {
  MyPair<int> intPair(1, 7);
  MyPair<double> doublePair(3.14, 2.91);

  intPair.print();
  doublePair.print();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.2";
    fflush(stdin);
    cin.get();
  return 0;
}