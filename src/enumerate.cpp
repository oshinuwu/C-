#include<iostream>
enum Example : int
{
    A=5,B, C //value of B and C will be automatically assigned with increments to A
};
//only the values assigned in enum can be used for the data type enum
int main()
{
    Example value=A;

    if(value==A)
    {
        std::cout<<value<<std::endl;
    }
    
    fflush(stdin);
    std::cin.get();
    return 0;

}