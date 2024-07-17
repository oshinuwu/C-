#include<iostream>
using namespace std;
class info{
    int age;
    public:
    info(int l){
        age=l;
    }
    void dis(){
        cout<<"\nAge = "<<age;
    }
    
};
void obj(int a){
       
        info o(a);
       o.dis();
    }
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    obj(age);
    
     cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-e";
    fflush(stdin);
    cin.get();
}
