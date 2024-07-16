#include<iostream>
using namespace std;
int& modify(int* a, int ind){
    return a[ind];
}
int main(){
    int array[4]={2,4,6,9};
    cout<<"The initial list : ";
    for(int i=0;i<4;i++){
        cout<<array[i]<<" ";

    }
    int& r=modify(array,3);
    r=8;
    cout<<"\n\nAfter modification : ";
    for(int i=0;i<4;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:13";
    fflush(stdin);
    cin.get();
    return 0;
}
