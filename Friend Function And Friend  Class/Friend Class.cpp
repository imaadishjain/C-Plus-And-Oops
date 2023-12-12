#include<iostream>
using namespace std;

class test1
{
    private: int a,b;
    public:
           void gets()
           {
               cout<<"Enter two number=";
               cin>>a>>b;
           }
           void outs()
           {
               cout<<a<<b<<endl;
           }
  friend class test2;
};

class test2
{
    private: int c;
    public:
         void sums(test1 x)
         {
             c=x.a+x.b;
         }
         void outs()
         {
             cout<<"Sum="<<c;
         }
};
int main()
{
    test1 p;
    test2 q;
    p.gets();
    q.sums(p);
    q.outs();
    return 0;
}
