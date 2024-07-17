#include <iostream>
#include<string>
using namespace std;
struct person{
    string name;
    int age;
    double height;

};
int main(){
    person p1;
    cout<<"Enter your name : ";
    getline(cin,p1.name);
    cout<<"Enter your age : ";
    cin>>p1.age;
    cout<<"Enter your height in meters : ";
    cin>>p1.height;
    cout<<endl<<endl
    <<"Name : "<<p1.name
    <<"\nAge : "<<p1.age
    <<"\nHeight : "<<p1.height;

     cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-a";
    fflush(stdin);
    cin.get();
return 0;
    
}
