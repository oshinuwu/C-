/*Write a program to print a pyramid pattern of stars with n levels. The
value of n should be read from the user.*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int lvl;
    cout<<"Enter the number of levels of pyramid : ";
    cin>>lvl;
    int wide=10;
    for(int i=1;i<=lvl;i++){
        cout<<setw(wide);
        for(int j=1;j<=i;j++){
            cout<<"* ";
    
        }
        wide--;
        cout<<endl;
    }
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:7-6";
    fflush(stdin);
    cin.get();
    
}