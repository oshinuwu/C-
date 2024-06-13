#include<iostream>
#include<cmath>
using namespace std;
float bmi (float wt,float ht)
{
    float result=wt/pow(ht,2);
    return result;
}
int main()
{
    float wt, ht;
    cout<<"enter weight in kg"<<endl;
    cin>>wt;
    cout<<"enter height in m"<<endl;
    cin>>ht;
    cout<<"your body mass index is"<<bmi(wt,ht)<<endl;

    fflush(stdin);
    cin.get();
    return 0;
}