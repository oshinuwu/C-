/*Write overloaded functions named max to find the maximum value among:
 Two integers.
 Two floating-point numbers.
 Two characters (based on ASCII values).*/
#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
float max(float a, float b){
    if(a>b)
        return a;
    else
        return b;

}
char max(char a, char b){
    if(a>b)
        return a;
    else
        return b;
}
int main(){
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout<<"Enter two integers : ";
    cin>>i1>>i2;
    cout<<"Enter two decimals : ";
    cin>>f1>>f2;
    cout<<"And finally, enter any two letters or symbols : ";
    cin>>c1>>c2;

    cout <<"\n\nThe greater integer : "<<max(i1,i2)<<endl;
    cout<<"The greater decimal : "<<max(f1,f2)<<endl;
    cout<<"The greater character in terms of ASCII value : "<<"'"<<max(c1,c2)<<"'";
    
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:8-3";
    fflush(stdin);
    cin.get();
    return 0;
}