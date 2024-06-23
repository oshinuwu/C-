/*Write a program that reads an integer from the user and checks if
it is positive, negative, or zero. Print an appropriate message for each case.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an integer : ";
    cin>>num;
    switch(num>0){
        case true:
        cout<<endl<<"The integer is positive.";
        break;

        case false:
        switch(num<0){
            case true:
            cout<<endl<<"The integer is negative.";
            break;

            case false:
            cout<<endl<<"The integer is zero";
        }
    }

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:7-1";
    fflush(stdin);
    cin.get();
    return 0;    
}