#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"Enter an integer : ";
    cin>>num;
    switch(num>0){
        case true:
        cout<<endl<<"The integer is positive.";
        break;//break statement

        case false:
        switch(num<0){
            case true:
            cout<<endl<<"The integer is negative.";
            break;

            case false:
            cout<<endl<<"The integer is zero";
        }
    }
    while(num>0){
        int r=num%10;
        num=num/10;
        if(r!=5){
            sum=sum+r;
           
        }
        else{
         continue;
    }}
    cout<<"sum is"<<sum;
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:20";
    fflush(stdin);
    cin.get();
    return 0;    
}
