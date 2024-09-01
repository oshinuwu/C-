#include <iostream> //5.3
using namespace std;
class Student
{
    int roll;
    string name;

public:
    Student()
    {
        cout << "\nStudent's roll number : ";
        cin >> roll;
        cout << "Student's name : ";
        cin >> name;
    }

    void print_student_details()
    {
        cout << "Roll no. : " << roll << endl
             << "Name : " << name << endl;
    }
};

class Mathematics : public Student
{

    string subjects[3] = {"Maths-I", "Physics", "Maths-II"};
    int marks[3];

public:
    Mathematics() : Student() {};
    void Mreadmarks()
    {

        for (int i = 0; i < 3; i++)
        {
            cout << "Marks obtained in " << subjects[i] << " : ";
            cin >> marks[i];
        }
    }

    void Mprintmarks()
    {
        print_student_details();
        int sum = 0;

        for (int i = 0; i < 3; i++)
        {
            cout << subjects[i] << " (marks) : " << marks[i] << endl;
            sum = sum + marks[i];
        }
        cout << "\n\tAverage marks in all three subjects : " << sum / 3;
    }
};

class computer : public Student
{
    string subjects[3] = {"Networking", "OOP", "AI"};
    int marks[3];

public:
    computer() : Student() {};
    void Creadmarks()
    {

        for (int i = 0; i < 3; i++)
        {
            cout << "Marks obtained in " << subjects[i] << " : ";
            cin >> marks[i];
        }
    }

    void Cprintmarks()
    {
        int sum = 0;
        print_student_details();

        for (int i = 0; i < 3; i++)
        {
            cout << subjects[i] << " : " << marks[i] << endl;
            sum = sum + marks[i];
        }
        cout << "\n\tAverage marks of all three subjects : " << sum / 3;
    }
};

int main()
{

    computer s1;
    s1.Creadmarks();
    cout << "\n\nPrinting student's details :" << endl
         << endl;
    s1.Cprintmarks();

    Mathematics s2;
    s2.Mreadmarks();
    cout << "\n\nPrinting student's details :" << endl
         << endl;
    s2.Mprintmarks();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:5.3";
    fflush(stdin);
    cin.get();
}