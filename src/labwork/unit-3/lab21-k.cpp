#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int id,rank;
    public:
    Student(){
        id=0;
        rank=0;
        name ="XXXX";

    }
    Student(string a,int b, int c){
        name = a;
        id = b;
        rank = c;
    }
    Student(int b, int c){
        name = "mystery";
        id=b;
        rank =c;
    }
    void disp(){
        cout<<"\nId number : "<<id<<endl
        <<"Name : "<<name<<endl
        <<"Rank : "<<rank<<endl;
    }
};
int main(){
    string n;
    int i,r;
    cout<<"Id number : ";
    cin>>i;
    cout<<"Name of the student : ";
    cin>>n;
    cout<<"Rank of the student : ";
    cin>>r;

    Student s1;
    cout<<"\n\nUsing default constructor:"<<endl;
    s1.disp();

    Student s2(n,i,r);
    cout<<"\n\nUsing parameterized contructor:"<<endl;
    s2.disp();

    Student s3(i,r);
    cout<<"\n\nusing another parameterized contructor but without passing string variable :"<<endl;
    s3.disp();
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-k";
    fflush(stdin);
    cin.get();
}
