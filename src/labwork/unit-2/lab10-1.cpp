/*Calculator with Default Operation Write a C++ program that implements a
calculator using a function with a default argument for the operation. The program should prompt
the user to enter two numbers and perform the specified operation (addition, subtraction,
multiplication, or division). If no operation is provided, the calculator should default to addition.
Display the result of the operation.*/
#include<iostream>
using namespace std;
void calculator(char opt='+', float a=0, float b=0){
    switch(opt){
        case '+':
        cout<<"the sum is "<<a+b;
        break;

        case '-':
        cout<<"The difference is "<<a-b;
        break;

        case '*':
        cout<<"The product is "<<a*b;
        break;

        case '/':
       if(b!=0){
        cout<<"the quotient is"<<a/b;
       }
       else{
        cout<<"indivisible";
       }
        break;

        default:
        cout<<"The sum is "<<a+b;
        break;
    }
}
int main(){
    float n1,n2;
    char o;
    cout<<"Calculator :"<<endl;
    cout<<"\n\nEnter 2 numbers to be used on calculator : ";
    cin>>n1>>n2;
    cout<<"Now enter the operator (+,/,* or -). invalid input results in calculating sum.";
    cin>>o;
    cout<<endl;
    calculator(o,n1,n2);

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:10-1";
    fflush(stdin);
    cin.get();
}

    
