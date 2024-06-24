/*Write overloaded functions named area to calculate the area of:
 A circle (given the radius).
 A rectangle (given the length and width).
 A triangle (given the base and height).*/
#include<iostream>
using namespace std;
#define pi 3.14159
double area(double radius){
    return radius*radius*pi;

}
float area(float length, float width){
    return length*width;
}
double area(double base, double height){
    return (base*height)/2;
}
int main(){
    double r,b,h;
    float l,w;
    cout<<"The area calculator :"<<endl<<endl<<endl;
    cout<<"Enter the radius of circle in meters : ";
    cin>>r;
    cout<<"Enter the length and the height of the rectangle in meters : ";
    cin>>l>>w;
    cout<<"Enter the base and the height of the triangle in meters :  ";
    cin>>b>>h;
    
    cout<<"\n\nThe area of circle :  "<<area(r)<<" meter squares"<<endl;
    cout<<"The area of rectangle :  "<<area(l,w)<<" meter squares"<<endl;
    cout<<"The area of triangle :  "<<area(b,h)<<" meter squares";

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:8-2";
    fflush(stdin);
    cin.get();
}