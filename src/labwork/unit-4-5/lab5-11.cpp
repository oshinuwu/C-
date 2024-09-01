#include <iostream>
using namespace std;

// Base class A
class A
{
public:
    void display()
    {
        cout << "Class A function" << endl;
    }
};

// Derived class B inheriting from A
class B : public A
{
};

// Derived class C inheriting from A
class C : public A
{
};

// Derived class D inheriting from B and C
class D : public B, public C
{
};

int main()
{
    D obj;
    obj.B::display();
    obj.C::display(); // No ambiguity because of virtual inheritance
    cout << "\nName:Oshin Pant Roll NO:23 Lab_no:5.11";
     fflush(stdin);
    cin.get();
    return 0;
}
