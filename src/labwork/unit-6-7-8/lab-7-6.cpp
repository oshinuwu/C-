#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
  try {
    throw runtime_error("Runtime error");
  } catch (...) {
    cerr << "Caught an exception." << endl;
  }

cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.6";
    fflush(stdin);
    cin.get();
  return 0;
}