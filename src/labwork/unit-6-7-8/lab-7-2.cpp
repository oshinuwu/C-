#include <iostream>
#include <string>

using namespace std;

// Class template with single value argument
template <typename T>
class SingleValue {
private:
    T value;

public:
    SingleValue(T val) : value(val) {}

    T getValue() { return value; }
};

// Class template with multi-value arguments
template <typename T1, typename T2>
class MultiValue {
private:
    T1 value1;
    T2 value2;

public:
    MultiValue(T1 val1, T2 val2) : value1(val1), value2(val2) {}

    T1 getValue1() { return value1; }
    T2 getValue2() { return value2; }
};

int main() {
    // Example usage of SingleValue class template
    SingleValue<int> singleInt(10);
    cout << "Single Value: " << singleInt.getValue() << endl;

    // Example usage of MultiValue class template
    MultiValue<int, string> multiValue(10, "hello");
    cout << "Multi Values: " << multiValue.getValue1() << " " << multiValue.getValue2() << endl;

  cout << "\nName: Oshin Pant Roll NO:23 Lab_no:7.2";
    fflush(stdin);
    cin.get();
    return 0;
}