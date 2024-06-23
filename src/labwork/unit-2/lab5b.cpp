/*Write a program that prints a table of numbers (1 to 5) and their squares, ensuring
that the numbers are aligned in two columns using setw.*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void table(int x, int wi){
    for(int i=1;i<=10;i++){
        cout<<x<<"*"<<i<<"="<<x*i<<setw(wi)<<pow(x*i,2)<<endl;
    }
}
int main(){
    int n,w;
    cout<<"How much width do you want to set? "<<endl;
    cin>>w;
    cout<<endl<<"\ntable"<<setw(w+5)<<"squares"<<endl<<endl;
    for(n=1;n<=5;n++){
        table(n,w);
        cout<<endl;
         
}
    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:5b";
    fflush(stdin);
    cin.get();

}