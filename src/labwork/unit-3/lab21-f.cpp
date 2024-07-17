#include<iostream>
#include<string>
using namespace std;
class Book{
    string title;
    string author;
    public:
    Book(){
        title="unknown";
        author="unknown";
    }
    Book(string a, string b){
        title = a;
        author = b;
    }
    Book(string a){
        title = a;
        author ="unknown";
    }
    void func(){
        cout<<endl<<"Title : "<<title<<endl<<"Author : "<<author;
    }

};
int main(){
    string t,a;
    cout<<"Name of the book : ";
    getline(cin,t);
    cout<<"Name of the author : ";
    getline(cin,a);
    Book B1;
    cout<<"\nMethod no. 1 :"<<endl;//passing no arguments.
    B1.func();
    Book B2(t);
    cout<<"\n\nMethod no. 2 : "<<endl;//passing one argument.
    B2.func();
    Book B3(t,a);
    cout<<"\n\nMethod no. 3 : "<<endl;//passing both arguments.
    B3.func();

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-f";
    fflush(stdin);
    cin.get();
}
