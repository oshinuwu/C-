#include<iostream>
using namespace std;
struct C{
    
    
        string name;
        int roll;
    
    public:
    C(string a, int b){
        name=a;
        roll= b;
    }
    C(C& o){
        name=o.name;
        roll=o.roll;

    }
    void output(){
        cout<<"\n\nName : "<<name<<endl;
        cout<<"Roll no. : "<<roll<<endl;
    }

};
int main(){
    C O("Oshin",23);
    O.output();

    C O2(O);
    O2.output();
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-h";
    fflush(stdin);
    cin.get();
}
