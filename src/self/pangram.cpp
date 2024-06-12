#include<iostream>
using namespace std;
// Function to check if a string is a pangram
bool isPangram(string a1)
{
    bool alphabet[26] = {false}; // This array will be used to track which letters of the alphabet have been seen
    for (char c : a1)// Iterate over each character in the input string
    {
        if(isalpha(c))// Check if the character is a letter (ignoring non-alphabetic characters)
        {
            char lowercase=tolower(c);
            alphabet[lowercase-'a']=true;
        }
    }
    for (bool b : alphabet) // Iterate over the alphabet array to check if all elements are true
    {
        if (!b){
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);

    if(isPangram(str))
    {
        cout<<"its is a pangram";
    }
    else{
        cout<<"it is not a pangram";
    }
    fflush(stdin);
    cin.get();
    return 0;
}