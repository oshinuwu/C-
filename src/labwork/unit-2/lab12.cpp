#include<iostream>
using namespace std;
void Swap(int& a,int& b){
    int ab;
    ab=a;
    a=b;
    b=ab;

}
int main(){
    int m,n;
    cout<<"Enter 1st number : ";
    cin>>m;
    cout<<"Enter 2nd number : ";
    cin>>n;
    cout<<"\n\nInitial Values :"<<endl
    <<"1st number : "<<m<<endl
    <<"2nd number : "<<n<<endl;


    Swap(m,n);
    cout<<"\n\nAfter swapping :"<<endl
    <<"1st number : "<<m<<endl
    <<"2nd number : "<<n<<endl;

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:12";
    fflush(stdin);
    cin.get();
    return 0;
}
