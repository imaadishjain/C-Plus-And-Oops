#include<bits/stdc++.h>
using namespace std;

class test
{
    private: int a;
    public:
           void get()
           {
               cout<<"Enter the value of a=";
               cin>>a;
           }
           void change()
           {
               //a=0;
               // We cannot change the data member
               // get(); We cannot call member function
           }
           void out()
           {
               cout<<"The value of a="<<a;
           }
};

int main()
{
    test A;
    A.get();
    A.change();
    A.out();
    return 0;
}
