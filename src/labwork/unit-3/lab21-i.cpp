#include<iostream>
using namespace std;
class C{
    
    
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
    C(C& o,C& p){
        name=o.name;
        roll=p.roll;

    }
    void output(){
        cout<<"\n\nName : "<<name<<endl;
        cout<<"Roll no. : "<<roll<<endl;
    }

};
int main(){
    string N;
    int R;
    cout<<"Enter your name : ";
    cin>>N;
    cout<<"Enter your roll number : ";
    cin>>R;
    C O(N,R);
    O.output();

    C O2(O);
    O2.output();

    C O3(O,O2);
    O3.output();
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-i";
    fflush(stdin);
    cin.get();
}
