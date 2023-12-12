#include<iostream>
using namespace std;

class fact
{
    private: int n,f; // You Cannot initialse n and f here
    public:
           void gets()
           {
               cout<<"Enter a number=";
               cin>>n;
           }
           fact()   //Constructure  No Return (aur void apan likhta nahi ha )
           {
               f=1;
           }
           void cals()
           {
               int i;
               for(i=1;i<=n;i++)
               {
                   f=f*i;
               }
           }
           void outs()
           {
               cout<<"Factorial of a number is="<<f;
           }
};
int main()
{
    fact p;
    p.gets();
    p. cals();
    p.outs();
    return 0;
}
