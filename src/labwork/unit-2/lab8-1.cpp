/*Write overloaded functions named sum to calculate the sum of:
 Two integers.
 Two floating-point numbers.
 Two strings (concatenation).*/
#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;

}
double sum(double a, double b){
    return a+b;

}
string sum(string a, string b){
    return a+b;

}
int main(){
    int i1,i2;
    double d1,d2;
    string s1,s2;
    cout<<"Enter two integers : ";
    cin>>i1>>i2;
    cout<<"Enter two decimals : ";
    cin>>d1>>d2;
    cout<<"Enter two strings : ";
    cin>>s1>>s2;

    cout<<"\n\nThe sum of those integers is "<<sum(i1,i2)<<endl;
    cout<<"The sum of those two decimals is "<<sum(d1,d2)<<endl;
    cout<<"The concatenation of those two strings is "<<"'"<<sum(s1,s2)<<"'";
     cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:8-1";
    fflush(stdin);
    cin.get();
    return 0;
}