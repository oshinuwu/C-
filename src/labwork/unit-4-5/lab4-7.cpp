#include <iostream> //4.7
#include <string>
using namespace std;
class Subtract
{
    int x, y;

public:
    Subtract(int x = 0, int y = 0) : x(x), y(y) {};
    Subtract operator-(const Subtract &sub)
    {
        return Subtract(x - sub.x, y - sub.y);
    }
    void result()
    {
        cout << "(" << x << "x" << " + " << y << "y)" << "  ";
    }
};
int main()
{
    Subtract s1(10, 13), s2(5, 6);
    Subtract s3 = s1 - s2;
    s1.result();
    cout << " - ";
    s2.result();
    cout << " = ";
    s3.result();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.7";
    fflush(stdin);
    cin.get();
}