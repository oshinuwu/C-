#include<iostream>
using namespace std;

void Swap1(int a,int b){
     swap(a,b);//library function within a user defined function
      cout<<"\n\nAfter swapping :"<<endl
        <<"1st number : "<<a<<endl
        <<"2nd number : "<<b<<endl;
}
int main(){
    int x,y;
    cout<<"1st number : ";
    cin>>x;
    cout<<"2nd number : ";
    cin>>y; 
    
    
    Swap1(x,y);
    
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:19";
    fflush(stdin);
    cin.get();
    return 0;
}
