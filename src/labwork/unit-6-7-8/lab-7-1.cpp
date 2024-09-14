#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b) {
  return a + b;
}

int main() {
  int a = 15, b = 20;
  double c = 8.5, d = 7.8;

  cout << "Sum of integers: " << sum(a, b) << endl;
  cout << "Sum of doubles: " << sum(c, d) << endl;

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.1";
    fflush(stdin);
    cin.get();
  return 0;
}