#include <iostream> //5.6
using namespace std;
class Staff
{
    int code;
    string name;

public:
    Staff(int c, string n)
    {
        code = c, name = n;
    }
    void print_staff()
    {
        cout << "\n\n\nPrinting staff details :\n\n";
        cout << "Code number : " << code
             << endl
             << "Name of the staff : " << name << endl;
    }
};
class Teacher : public Staff
{
    double salary;
    string subject;

public:
    Teacher(int c, string n) : Staff(c, n) {};

    void tdetails()
    {
        cout << "Subject : ";
        cin >> subject;
        cout << "Salary per month : ";
        cin >> salary;
        print_staff();
        cout << "Subject : " << subject << endl;
        cout << "Salary per month : " << salary << endl;
    }
};

class Typist : public Staff
{
    int speed;

public:
    Typist(int c, string n) : Staff(c, n) {};

    void tdetails()
    {
        cout << "Speed (wpm) : ";
        cin >> speed;
        print_staff();
        cout << "Speed (wpm) : " << speed;
    }
};

int main()
{
    int code;
    string name, position;

    cout << "Enter code number : ";
    cin >> code;

    cout << "Enter name : ";
    cin >> name;

    cout << "Enter the position of staff(all small letters) : ";
    cin >> position;

    if (position == "teacher")
    {
        Teacher st(code, name);
        st.tdetails();
    }
    else if (position == "typist" || position == "typer")
    {
        Typist st(code, name);
        st.tdetails();
    }
    else
    {
        Staff st(code, name);
        st.print_staff();
    }

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:5.6";
    fflush(stdin);
    cin.get();
}