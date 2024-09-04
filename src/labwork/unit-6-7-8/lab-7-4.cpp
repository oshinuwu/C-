#include <iostream>
using namespace std;

int main() {
  int age;

  cout << "Enter your age: ";
  cin >> age;

  try {
    if (age < 0 || age > 200) {
      throw invalid_argument("Age must be between 0 and 200.");
    }
    cout << "You are " << age << " years old." << endl;
  } catch (const invalid_argument& e) {
    cerr << "Error: " << e.what() << endl;
  }

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.4";
    fflush(stdin);
    cin.get();
  return 0;
}