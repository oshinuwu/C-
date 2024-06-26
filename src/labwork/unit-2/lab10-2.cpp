/*Circle Area Calculator Write a C++ program that calculates the area of a circle using
a function with a default argument for the radius. The program should prompt the user to enter the
radius of the circle. If no radius is provided, the calculator should default to a radius of
Display the calculated area of the circle.*/
#include<iostream>
#include<cmath>
using namespace std;
float area(float radius=5){
   float res=3.14*pow(radius,2);
   return res;
}
int main()
{
    int r;
    cout<<"enter a radius"<<endl;
    cin>>r;
    cout<<"the radius is"<<area(r);

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:10-2";
    fflush(stdin);
    cin.get();
}