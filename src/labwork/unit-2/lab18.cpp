#include<iostream>
using namespace std;
double Double(double a){
    return a*a;

}
double Half(double a){
    return a/2;
}
void callerfunction(double(*p)(double),double a){
cout<<"\nIt is "<<p(a);

}
int main(){
    double n;
    char input;
    cout<<"Enter a number : ";
    cin>>n;
    double(*ptr)(double);
    cout<<"\nYou entered "<<n<<". Enter 'h' to half it and 'd' to double it."<<endl;
    cin>>input;
    switch(input){
        case 'h':
        ptr=Half;
        break;

        case 'd':
        ptr = Double;
        break;

        default:
        cout<<"Invalid input";
        return 0;
        break;
    }
    callerfunction(ptr,n);
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:18";
    fflush(stdin);
    cin.get();
    return 0;
}
