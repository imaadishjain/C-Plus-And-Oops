#include<iostream>
using namespace std;

class student //Programmer
{
    private : char name[10];
              int roll;
    public:
           void gets()
           {
               cout<<"Enter Student Name=";
               cin>>name;
               cout<<"Enter Student Roll no.=";
               cin>>roll;
           }
           void outs()
           {
               cout<<"Name="<<name;
               cout<<endl<<"Roll no.="<<roll;
           }
};
int main() //User
{
    student p; // student is class and p is object
    p.gets(); // (.)Calling member function
    p.outs();// (.)Calling member function
    cout<<endl<<"Size of object="<<sizeof(p);
    return 0;
}
