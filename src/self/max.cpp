// C++ program to demonstrate the use of std::max_element 
#include <iostream> 
#include <algorithm> 
using namespace std; 
bool comp(int a, int b) 
{ 
 return (a < b); 
} 
int main() 
{ 
int v[] = { 'a', 'c', 'k', 'd', 'e', 'f', 'h' }; 

// Finding the maximum value between the first and the 
// fourth element 

int* i1; 
i1 = std::max_element(v, v + 4); 

cout << char(*i1) << "\n"; 

int u[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 }; 
 
 // Finding the maximum value between the third and the 
 // ninth element 
 
 int* j1; 
 j1 = std::max_element(u + 2, u + 9, comp); 
 
 cout << *j1 << "\n"; 

fflush(stdin);
cin.get();
return 0; 
} 
