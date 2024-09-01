#include <iostream>
using namespace std;

class Negator
{
    int a, b, c;

public:
    Negator(int a, int b, int c) : a(a), b(b), c(c) {}

    Negator operator~() const; // Declare operator~
    void display()
    {
        cout << a << endl
             << b << endl
             << c << endl;
    }
};

Negator Negator::operator~() const // Define operator~
{
    return Negator(~a, ~b, ~c);
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers :" << endl;
    cin >> a >> b >> c;

    Negator n(a, b, c);
    cout << "Before using negation operator :\n\n";
    n.display();
    Negator negated = ~n; // Use operator~
    cout << "\n\n\nAfter using negation operator :\n\n";
    negated.display();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.5";
    fflush(stdin);
    cin.get();
    return 0;
}