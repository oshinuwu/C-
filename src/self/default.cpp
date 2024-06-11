// C++ program to illustrate the concept of default constructors
#include <iostream>
using namespace std;

class construct {
public:
	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	// Default constructor called automatically
	
	construct c;
	cout << "a: " << c.a << endl << "b: " << c.b;

    fflush(stdin);
    cin.get();
	return 0;
}
