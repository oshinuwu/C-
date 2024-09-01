#include <iostream> //4.9
using namespace std;
class features
{
public:
    int speed, accuracy, damage, durability;

    friend istream &operator>>(istream &in, features &f);

    friend ostream &operator<<(ostream &out, features &f);
};
istream &operator>>(istream &in, features &f)
{
    cout << "Enter speed , accuracy , damage and durability of character 1 :" << endl;
    in >> f.speed >> f.accuracy >> f.damage >> f.durability;
    return in;
}

ostream &operator<<(ostream &out, features &f)
{

    out << "Speed : " << f.speed << endl
        << "Accuracy : " << f.accuracy << endl
        << "Damage : " << f.damage << endl
        << "Durability : " << f.durability << endl;
    return out;
}
int main()
{
    features f1;
    cin >> f1;
    cout << f1;

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.9";
    fflush(stdin);
    cin.get();
}