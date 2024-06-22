// C++ program for function overriding with data members
#include <iostream>
using namespace std;

// base class declaration.
class Animal {
public:
	string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal {
public:
	string color = "Grey";
};

int main()
{
    Dog b;
    cout<<b.color;
	Animal d ; 
	cout << d.color;

    fflush(stdin);
    cin.get();
    return 0;
}
