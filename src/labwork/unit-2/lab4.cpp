//Write a program that uses the standard namespace and demonstrates the use of cin, cout, and endl.
#include<iostream>
using namespace std;//using standard namespace

int main(){
    int x,y;
    cout<<"Enter two numbers : ";//displaying something
    cin>>x>>y;//taking the user input
    int sum = x+y;


    cout<<"The numbers you have entered are "<<x<<" and "<<y<<endl;
    //endl creates a new line, making the output less messy.
    cout<<"Their sum is "<<sum<<endl;

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:4";
    fflush(stdin);
    cin.get();
    return 0;

}