#include <iostream> //5.2
using namespace std;
class lecture
{
    int ID;
    string name;

public:
    void readdata()
    {
        cout << "Enter name of the lecture : ";
        cin >> name;
        cout << "Enter id number of the lecture : ";
        cin >> ID;
    }

    void printdata()
    {
        cout << "ID : " << ID << endl;
        cout << "Name : " << name << endl;
    }
};

class parttime : public lecture
{
    float payperhr;

public:
    void preaddata()
    {
        readdata();
        cout << "Pay per hour : ";
        cin >> payperhr;
    }
    void pprintdata()
    {
        printdata();
        cout << "Pay per hour : " << payperhr << endl;
    }
};

class fulltime : public lecture
{
    float paypermonth;

public:
    void freaddata()
    {
        readdata();
        cout << "Pay per Month : ";
        cin >> paypermonth;
    }

    void fprintdata()
    {
        printdata();
        cout << "Pay per Month : " << paypermonth << endl;
    }
};

int main()
{
    parttime pt1;
    pt1.preaddata();
    cout << endl
         << endl;
    pt1.pprintdata();

    cout << "\n\n\n";

    fulltime ft1;
    ft1.freaddata();
    cout << endl
         << endl;
    ft1.fprintdata();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:5.2";
    fflush(stdin);
    cin.get();
}