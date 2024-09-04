#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
  try {
    throw runtime_error("Runtime error");
  } catch (const exception& e) {
    cerr << "Caught an exception: " << e.what() << endl;
  } catch (...) {
    cerr << "Caught an unknown exception." << endl;
  }

cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.5";
    fflush(stdin);
    cin.get();
  return 0;
}