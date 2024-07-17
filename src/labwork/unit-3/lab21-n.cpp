#include<iostream>
using namespace std;
class calculate{
    public:
    static double pi;
    static double area(double r){
        return r*pi*pi;
    }
};
double calculate::pi=3.1415;
int main(){
    double rad;
    cout<<"Enter radius : ";
    cin>>rad;
    cout<<"Area = "<<calculate::area(rad);
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-n";
    fflush(stdin);
    cin.get();
}
