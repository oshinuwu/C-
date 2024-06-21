// C++ program to demonstrate Operator Overloading or Compile-Time Polymorphism
#include <iostream>
using namespace std;
class Complex {
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	// This is automatically called when '+' is used with between two Complex objects
	Complex operator+(Complex const& obj)
	{
		Complex res; //an object res is created to pass the return value
		res.real = real + obj.real; // Add the real parts of the current object and the obj object
		res.imag = imag + obj.imag;// Add the imaginary parts of the current object and the obj object
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }
};

int main()
{
	Complex c1(10, 5), c2(2, 4);

	// An example call to "operator+"
	Complex c3 = c1 + c2;
	c3.print();

    fflush(stdin);
    cin.get();
    return 0;
}
