#include<iostream>
using namespace std;
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable) or data members
    string myString;  // Attribute (string variable) or data members
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << endl;
  cout << myObj.myString;
   fflush(stdin);
    cin.get();
  return 0;
}