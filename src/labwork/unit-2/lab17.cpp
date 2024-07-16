#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of list members : ";
    cin>>n;
    int array[n];
    cout<<"\n\nEnter those numbers : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int* ptr=array;

    
    cout<<"The members of array are : ";
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
        
    }
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:17";
    fflush(stdin);
    cin.get();
    return 0;
}
