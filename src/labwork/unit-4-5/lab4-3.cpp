#include <iostream> //4.3
#include <string>
using namespace std;
class Name
{
    string fhalf;
    string lhalf;

public:
    Name(string s, string t)
    {
        fhalf = s;
        lhalf = t;
    }
    Name operator+(Name &objekt)
    {
        return Name(fhalf + objekt.fhalf, lhalf + objekt.lhalf);
    }
    void show()
    {
        cout << fhalf << " " << lhalf << "\t\t";
    }
};

int main()
{
    Name part1("hel", "Wor");
    Name part2("lo", "ld");

    cout << "Before concatenation : ";
    part1.show();
    part2.show();
    cout << endl
         << "After concatenation : ";
    Name fullpart = part1 + part2;
    fullpart.show();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.3";
    fflush(stdin);
    cin.get();
}