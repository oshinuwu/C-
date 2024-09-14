#include <iostream>

using namespace std;

int main() {
    int dividend = 5;
    int divisor = 0;

    try {
        if (divisor == 0) {
            throw runtime_error("Division by zero!");
        }
        int result = dividend / divisor;
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        // Catch runtime error
        cout << "Caught runtime error: " << e.what() << endl;
    } catch (...) {
        // Catch any other exceptions
        cout << "Caught unknown exception" << endl;
    }

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.5";
    fflush(stdin);
    cin.get();
    return 0;
}