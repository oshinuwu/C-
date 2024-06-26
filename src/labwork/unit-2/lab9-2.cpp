/*Inline Temperature Conversion Write a C++ program that utilizes inline functions to
convert temperature between Celsius and Fahrenheit scales. The program should prompt the user
to enter a temperature value and the scale of the input temperature (C for Celsius, F for
Fahrenheit). Then, using inline functions, convert the temperature to the other scale and display
the converted value.*/
#include<iostream>
using namespace std;
inline float into_C(float f){return (f-32)/1.8;}
inline float into_F(float c){return c*9/5+32;}
int main(){
    char inp;
    float temp;
    cout<<"Enter 'F' if you know the temperature in Fahrenheit and 'C' if Celsius :"<<endl;
    cin>>inp;
    cout<<"Now enter the temperature : ";
    cin>>temp;
    cout<<endl<<endl;
    switch(inp){
        case 'F':
        cout<<"The temperature is "<<into_C(temp)<<" degree Celsius.";
        break;

        case 'C':
        cout<<"The temperature is "<<into_F(temp)<<" degree Fahrenheit.";
        break;

        default:
        cout<<"Invalid input!";
        break;
    }
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:9-2";
    fflush(stdin);
    cin.get();
}