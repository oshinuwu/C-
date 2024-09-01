#include <iostream> //4.6
using namespace std;
class bag
{
    int price;

public:
    bag(int x) : price(x) {};
    friend void operator==(bag &c, bag &k);
};
void operator==(bag &c, bag &k)
{

    if (c.price + k.price == c.price * 2)
    {
        cout << "Prices of red bag and green bag are equal .";
    }
    else
    {
        cout << "Prices of red bag and green bag are not equal";
    }
}
int main()
{
    int p1, p2;
    cout << "Enter price of red bag : ";
    cin >> p1;
    cout << "Enter price of green bag : ";
    cin >> p2;
    bag rbag(p1), gbag(p2);
    rbag == gbag;

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:4.6";
    fflush(stdin);
    cin.get();
}