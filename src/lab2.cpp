#include<iostream>
using namespace std;
int main(){
    int a;
    double b;
    cout <<"Enter a integer : ";
    cin >> a;
    cout<<"\nEnter a decimal : ";
    cin >> b;
    double sum = a+b; //Implicit conversion
    cout <<"\n\nThe sum of the decimal and integer is : " << sum;
    int app=static_cast<int>(sum); //Explicit conversion
    app=app+1;
    cout <<"\n\n The sum is approximately : "<< app<<endl;

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:2";
    
    fflush(stdin);
    cin.get();

    return 0;
}