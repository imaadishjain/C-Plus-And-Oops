 /*It is process of deriving a new class from a single base class*/



#include<iostream>
using namespace std;

class base
{
    protected: int a,b; // Data Can be acess by Same class public and Inherit class public
    public:
           void gets()
           {
               cout<<"Enter two number=";
               cin>>a>>b;
           }
};
class derived:public base
{
    public:
             void outs()
             {
                cout<<"Two Number is="<<a<<","<<b;
             }
};
int main()
{
    derived p;
    p.gets();
    p.outs();
    return 0;
}
