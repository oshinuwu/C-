/*Write a program that uses preprocessor directives to define a constant value for PI (3.14) and
calculates the area of a circle with a radius of 5.*/
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14//defining the constant by using a preprocessor directive

int main(){
    int r=5;
    int area=PI*pow(r,2);
    cout<<"The area of the circle is "<<area<<endl;

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:3";
    cin.get();
    return 0;
    
}