#include <iostream>
class A
{
private:
    int num;
public:
   int display(int n)
   {
    num=n;
    std::cout<<num;
   }
};


int main()
{   
    A a;
    int n;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    a.display(n);

    fflush(stdin);
    std::cin.get();
    return 0;

}