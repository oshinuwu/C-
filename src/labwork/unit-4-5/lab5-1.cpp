#include <iostream> //5.1
using namespace std;
class Teacher
{
    int tid;
    string subject;

public:
    void read_teacher_data()
    {

        cout << "Enter tid : ";
        cin >> tid;
        cout << "Enter subject : ";
        cin >> subject;
    }

    void print_teacher_data()
    {
        cout << "tid : " << tid << endl
             << "Subject : " << subject << endl;
    }
};
class Staff
{
    int sid;
    string position;

public:
    void read_staff_data()
    {

        cout << "Enter sid : ";
        cin >> sid;
        cout << "Enter position : ";
        cin >> position;
    }

    void print_staff_data()
    {
        cout << "sid : " << sid << endl
             << "Position : " << position << endl;
    }
};

class Coordinator : public Teacher, public Staff
{
    string department;

public:
    void read_coordinator_data()
    {
        read_teacher_data();
        read_staff_data();
        fflush(stdin);
        cout << "Enter department : ";
        cin >> department;
    }
    void print_coordinator_data()
    {
        print_staff_data();
        print_teacher_data();
        cout << "Department : " << department << endl
             << endl;
    }
};
int main()
{
    string n1, n2;
    Coordinator c1, c2;

    cout << "Enter the name of coordinator : ";
    cin >> n1;
    c1.read_coordinator_data();
    cout << "\n\n\nDetails of coordinator " << n1 << " :" << endl
         << endl;
    c1.print_coordinator_data();

    cout << "\n\n\nEnter the name of coordinator : ";
    cin >> n2;
    c2.read_coordinator_data();
    cout << "\n\n\nDetails of coordinator " << n2 << " :" << endl
         << endl;
    c2.print_coordinator_data();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:5.1";
    fflush(stdin);
    cin.get();
}