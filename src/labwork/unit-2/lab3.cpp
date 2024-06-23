/*Write a program that uses preprocessor directives to define a constant value for PI (3.14) and
calculates the area of a circle with a radius of 5.*/
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14//defining the constant by using a preprocessor directive

int main(){
    int r=5;
    int area=(4/3)*PI*(pow(r,3));
    cout<<"The area of the sphere is "<<area<<endl;

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:3";
    cin.get();
    return 0;
    
}