/*4: Write a program to find the sum of the first n natural numbers using a while loop. The
value of n should be read from the user.*/
#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"Enter the value of n to find out the sum of 1st n natural numbers : ";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<endl<<"The sum of 1st "<<n<<" natural numbers is "<<sum;

    cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:7-4";
    fflush(stdin);
    cin.get();
    return 0;    
}