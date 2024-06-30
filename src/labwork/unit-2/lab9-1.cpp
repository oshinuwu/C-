/*Inline Calculator Write a C++ program that utilizes inline functions to perform basic
arithmetic operations on two numbers. The program should prompt the user to enter two numbers
and the operation they want to perform (addition, subtraction, multiplication, or division). Then,
using inline functions, calculate and display the result of the selected operation.*/
#include<iostream>
using namespace std;
inline float sum(float a, float b){return a+b;}
inline float difference(float a,float b){return a-b;}
inline float product(float a,float b){return a*b;}
inline float quotient(float a,float b)
{if(b!=0) 
{ 
    return a/b;
    }else {
        cout<<"invalid"; 
    }
}
int main(){
    float n1,n2;
    char sym;
    cout<<"This is a simple calculator."<<endl<<endl
    <<"To use it,enter a number, and enter an operator(+,-,* or /), then enter another number.\n\n";

    cin>>n1>>sym>>n2;


     switch(sym){
        case '+':
        cout<<"= "<<sum(n1,n2);
        break;

        case '-':
        cout<<"= "<<difference(n1,n2);
        break;

        case '*':
        cout<<"= "<<product(n1,n2);
        break;

        case '/':
        cout<<"= "<<quotient(n1,n2);
        break;

        default:
        cout<<"Invalid input :(";
        break;
     }
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:9-1";
    fflush(stdin);
    cin.get();
}