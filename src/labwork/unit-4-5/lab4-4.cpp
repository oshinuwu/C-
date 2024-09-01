#include <iostream> //4.4
using namespace std;
class Minus
{
    int a, b, c;
    float d;

public:
    Minus(int a, int b, int c, float d) : a(a), b(b), c(c), d(d) {};
    friend Minus operator-(Minus &m);
    void result()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
    }
};
Minus operator-(Minus &m)
{

    m.a = -m.a;
    m.b = -m.b;
    m.c = -m.c;
    m.d = -m.d;
    return m;
}
int main()
{
    Minus list(5, 134, 56, 67.9);
    cout << "Before :" << endl;
    list.result();
    -list;
    cout << "\n\nAfter :" << endl;
    list.result();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.4";
    fflush(stdin);
    cin.get();
}