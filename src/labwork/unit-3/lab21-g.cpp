#include<iostream>
#include<string>
using namespace std;
class Employee{
    string name;
    int id,salary;
    public:
    Employee(){//default
        id=0;
        salary=0;
        name ="XXXX";

    }
    Employee(string a,int b, int c){//parameterized
        name = a;
        id = b;
        salary = c;
    }
    void dis(){
        cout<<"\nId number : "<<id<<endl
        <<"Name : "<<name<<endl
        <<"Salary : "<<salary;
    }
};
int main(){
    string n;
    int i,s;
    cout<<"Id number : ";
    cin>>i;
    cout<<"Name of the employee : ";
    cin>>n;
    cout<<"Salary of the employee : ";
    cin>>s;

    Employee e1;
    cout<<"\n\nUsing default constructor:"<<endl;
    e1.dis();

    Employee e2(n,i,s);
    cout<<"\n\nUsing parameterized contructor:"<<endl;
    e2.dis();
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-g";
    fflush(stdin);
    cin.get();
}
