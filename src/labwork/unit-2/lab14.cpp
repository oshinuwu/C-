#include<iostream>
using namespace std;
extern int a=3;//extern storage class
void Static(){
    static int add =0;//static storage class
    add +=a;//
    cout<<add<<endl;

}
int main(){
    int n;//auto storage class
    cout<<"Here you can find the 1st n multiples of 3, enter the value of n yourself : ";
    cin>>n;
    for(int i=0;i<n;i++){
        Static();
    }
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:14";
    fflush(stdin);
    cin.get();
}
