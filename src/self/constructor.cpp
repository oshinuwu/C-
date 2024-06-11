#include<iostream>
using namespace std;
class A{

    private:
    int x;
    int y;
    public:
    A()
    {
        cout<<"enter two numbers"<<endl;
        cin>>x>>y;
    
    }
    void display()
    {
        cout<<"the sum is "<<x+y;
    }
};
int main()
{
    A a;//the constructor doesnot need to be called as it gets called with class
    a.display();
    
    fflush(stdin);
    cin.get();
    return 0;
}