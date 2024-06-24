/*Write a program to print the multiplication table of a number entered by the user
using a for loop.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to read its multiplication table : ";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:7-3";
    fflush(stdin);
    cin.get();
    return 0;    
}