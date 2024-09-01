#include <iostream> //4.10
using namespace std;
class Table
{
public:
    int a, b;

    friend istream &operator>>(istream &in, Table &f);

    friend ostream &operator<<(ostream &out, Table &f);
};
istream &operator>>(istream &in, Table &f)
{
    cout << "Enter Two numbers" << endl;
    in >> f.a >> f.b;
    return in;
}

ostream &operator<<(ostream &out, Table &f)
{
    for (int i = 1; i <= 10; i++)
    {
        out << f.a << "x" << i << "=" << f.a * i << endl;
    }
    out << endl;
    for (int i = 1; i <= 10; i++)
    {
        out << f.b << "x" << i << "=" << f.b * i << endl;
    }

    return out;
}
int main()
{
    Table t1;
    cin >> t1;
    cout << t1;

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4-10";
    fflush(stdin);
    cin.get();
}