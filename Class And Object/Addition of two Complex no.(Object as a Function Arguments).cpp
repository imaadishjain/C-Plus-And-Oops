#include<iostream>
using namespace std;

class complex
{
    private: int a,b;
    public:
           void gets()
           {
               cout<<"Enter real part=";
               cin>>a;
               cout<<"Enter imagianary part=";
               cin>>b;
           }
           void sums(complex x,complex y)
           {
               a=x.a+y.a;
               b=x.b+y.b;
           }
           void outs()
           {
                cout<<a<<"+"<<b<<"i"<<endl;
           }
};
int main()
{
    complex p,q,t;
    p.gets();
    q.gets();
    t.sums(p,q);
    p.outs();
    q.outs();
    t.outs();
    return 0;
}
