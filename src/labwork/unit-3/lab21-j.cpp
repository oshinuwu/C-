#include<iostream>
using namespace std;
class C{
    int n1,n2;
    public:
    C(int a, int b){
        n1=a;
        n2=b;
    }
    void dis(){
        cout<<"1st number : "<<n1<<endl
        <<"2nd number : "<<n2<<endl;
    }
    
    ~C(){
        cout<<"\n\nMemory is released"<<endl;
    }
};
int main(){
    int n1,n2;
    cout<<"Enter two numbers:"<<endl;
    cin>>n1>>n2;
    C o(n1,n2);
    o.dis();
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-j";
    fflush(stdin);
    cin.get();
}