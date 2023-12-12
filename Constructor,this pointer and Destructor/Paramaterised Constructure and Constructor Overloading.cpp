#include<iostream>
using namespace std;

class complex
{
    private: int a,b;
    public:
          complex()
          {
              a=0;
              b=0;
          }
          complex(int x)
          {
              a=x;
              b=0;
          }
          complex(int x, int y)
          {
              a=x;
              b=y;
          }
     void outs()
     {
         cout<<a<<"+"<<b<<"i"<<endl;
     }
};
int main()
{
    complex p;    // complex p,q(2),t(3,2);
    complex q(2);  // Implicit Calling constructor
    complex t(3,2);

    p.outs();
    q.outs();
    t.outs();
    return 0;
}
