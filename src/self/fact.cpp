#include<iostream>
using namespace std;
class A{
    private:
    int m_num;

    public:
    void set(int n)
    {
        m_num=n;
    }
    int fact()
    {
        return _fact(m_num);
    }
    int _fact( int n )
    {
       if(n == 0 || n == 1) // Base case for recursion
            return 1;
        else
            return n * _fact(n-1); // Recursive call
    }

};
int main()
{
    A a;
    int n;
    cout<<"enter a number";
    cin>>n;
    a.set(n);
   cout<<"factorial is "<< a.fact( );

    fflush(stdin);
    cin.get();
    return 0;
}