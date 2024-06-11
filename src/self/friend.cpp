//demonstrating a friend class
#include<iostream>
using namespace std;
class A {
    private:
    int x=100;
    protected:
    int y=20;
    friend class B;
};
class B {
    public:
    void display(A& a)
    {
       cout<<"the sum is"<<a.x+a.y;
    }
};
int main()
{
    A a;
    B b;
    b.display(a);
    
    fflush(stdin);
    cin.get();
    return 0;
}


