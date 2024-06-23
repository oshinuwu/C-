/*Write a program that reads a floating-point number from the user and prints it
with 2, 4, and 6 decimal places using setprecision.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float f1;
    cout<<"enter a float number"<<endl;
    cin>>f1;
    //setprecision 2
    cout<<setprecision(2)<<f1<<endl;
    //setprecision 4
    cout<<setprecision(4)<<f1<<endl;
    //setprecision 6
    cout<<setprecision(6)<<f1<<endl;

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:5c";
    fflush(stdin);
    cin.get();
}