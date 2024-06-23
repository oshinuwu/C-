/*Write a C++ program that dynamically allocates an array of integers based on user input. The
program should prompt the user to enter the size of the array and then dynamically allocate
memory for the array. Next, ask the user to enter integer values for each element of the array.
Finally, calculate and display the average of all the elements in the dynamically allocated array.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    float sum=0;
    float avg;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int* a=new int[n];
    cout<<endl<<"Now, enter the elements of your array"<<endl<<endl;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=(sum/n);
    cout<<endl<<"The average of all the elements of your array is "<<avg<<endl;
    delete a;

    cout<<"Name: Oshin Pant Roll NO:23 Lab_no:6";
    fflush(stdin);
    cin.get();
    return 0;    
}