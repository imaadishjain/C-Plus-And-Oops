#include<iostream>
using namespace std;

class Time
{
    private: int h,m;
    public:
           void gets()
           {
               cout<<"Enter Hours=";
               cin>>h;
               cout<<"Enter Minutes=";
               cin>>m;
           }
           void sums(Time x,Time y)
           {
               h=x.h+y.h;
               m=x.m+y.m;
               while(m>=60)
               {
                   h=h+1;
                   m=m-60;
               }
           }
           void outs()
           {
               cout<<h<<":"<<m<<endl;
           }
};
int main()
{
    Time p,q,t;
    p.gets();
    q.gets();
    t.sums(p,q);
    cout<<"Time 1=";
    p.outs();
    cout<<"Time 2=";
    q.outs();
    cout<<"Sum of Time=";
    t.outs();
    return 0;
}
