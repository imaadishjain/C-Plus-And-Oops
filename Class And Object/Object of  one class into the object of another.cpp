#include<bits/stdc++.h>
using namespace std;

class A
{
    private: string s;

    public :
             A()
             {
               s="Aadish";
             }
             string get()
             {
                 return s;
             }
             void out()
             {
                 cout<<"String="<<s<<endl;
             }
};

class B
{
    private: string p;

    public:
           void out()
           {
               cout<<"String="<<p<<endl;
           }
           void operator=(A x)
           {
            p=x.get();
           }
};

int main()
{
    A a;
    B b;

    b=a;

    a.out();
    b.out();
    return 0;

}
