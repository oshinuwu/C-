#include <iostream>
#include <string>
using namespace std;

class Department
{
public:
    string deptName; // Department name

    Department(string deptName)
    {
        this->deptName = deptName;
    }
};

class Employee
{
private:
    Department *department;

public:
    string empName;
    int empId;

    Employee(string empName, int empId, Department *department)
    {
        this->empName = empName;
        this->empId = empId;
        this->department = department;
    }

    void display()
    {
        cout << "Employee Name: " << empName << ", Employee ID: " << empId << ", Department: " << department->deptName << endl;
    }
};

int main(void)
{

    Department dept1 = Department("Sales");
    Department dept2 = Department("Marketing");

    Employee e1 = Employee("Joy", 101, &dept1);
    Employee e2 = Employee("Jane", 202, &dept2);

    e1.display();
    e2.display();

    cout << "\nName: Oshin Pant Roll NO:23 Lab_no:5.12";
     fflush(stdin);
    cin.get();
    return 0;
}