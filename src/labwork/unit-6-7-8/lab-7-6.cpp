#include <iostream>

using namespace std;

int main() {
   try {
    int divisor = 0;
    if (divisor != 0) {
        int x = 5 / divisor;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
} catch (...) {
    cout << "Caught an exception" << endl;
}
    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.6";
    fflush(stdin);
    cin.get();
    return 0;
}