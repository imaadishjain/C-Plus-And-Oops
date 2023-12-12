#include<iostream>
using namespace std;

class complex
{
    private: int a,b;

    public:
          complex(int x=0,int y=0) // Default Argument Constructor
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
  complex  p;
  complex q(2);
  complex t(3,2);

  p.outs();
  q.outs();
  t.outs();
  return 0;
}
