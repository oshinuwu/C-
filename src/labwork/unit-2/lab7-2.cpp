/*Create a simple calculator using the switch statement. The program should read two
integers and an operator (+, -, *, /) from the user and perform the corresponding operation.*/
#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    char sym;
    float res;
    cout<<"This is a simple calculator."<<endl
    <<"To use it,enter a number, and enter an operator(+,-,* or /), then enter another number.\n\n";

    cin>>n1>>sym>>n2;
     switch(sym){
        case '+':
        cout<<"= "<<n1+n2;
        break;

        case '-':
        cout<<"= "<<n1-n2;
        break;

        case '*':
        cout<<"= "<<n1*n2;
        break;

        case '/':
        if(n2!=0){
        res=n1/n2;
        cout<<"= "<<res;
        }
        else {
            cout<<"invalid (not divisible by 0)";
        }
        break;

        default:
        cout<<"Invalid input :(";
        break;
     }

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:7-2";
    fflush(stdin);
    cin.get();
    return 0;    
}