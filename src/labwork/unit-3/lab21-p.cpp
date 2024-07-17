#include<iostream>
using namespace std;
class original{
    private:
    string username = "xyz123";
    string password = "password";
    public:
    friend class Friend;

};
class Friend{
public:
Friend(original &a){
    cout<<"username : "<<a.username<<endl;
    cout<<"password : "<<a.password;
}

};
int main(){
   original f;
   Friend F(f);

   cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-p";
    fflush(stdin);
    cin.get();
   return 0;

}
