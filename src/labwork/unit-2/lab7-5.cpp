//Write a program to reverse the digits of a number using a do-while loop.
#include<iostream>
using namespace std;
int main(){
    long n,r=0;
    cout<<"Enter a number with two or more digits : ";
    cin>>n;

    do{
        r=(r*10)+(n%10);
        n=n/10;

    }while(n>0);
    cout<<"\n\nWhen you reverse the digits of number you get :"<<endl<<r;

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:7-5";
    fflush(stdin);
    cin.get();
    return 0;    
}