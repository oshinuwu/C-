//Write a program that prints five different strings, each on a new line using endl.
#include<iostream>
using namespace std;
int main(){
    string s[5];
    cout<<"Enter 5 random words one by one : ";
    for(int i=0;i<5;i++){
        cin>>s[i];
    }
    cout<<"\n\nThe words you entered are :"<<endl;//using endl a single time to start dispalying the user input on next line.
    for(int i=0;i<5;i++){
        cout<<s[i]<<endl;//using endl on loop.
    }

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:5a";
    fflush(stdin);
    cin.get();
    return 0;

}