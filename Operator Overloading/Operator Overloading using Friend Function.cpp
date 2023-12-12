#include<bits/stdc++.h>
using namespace std;

class test
{
    private: int a;

    public:
           void gets()
           {
               cout<<"Enter the value of a=";
               cin>>a;
           }
           void out()
           {
               cout<<"The value of a="<<a<<endl;
           }
        friend void operator-(test &x);
};

  void operator-(test &x)
  {
      x.a=(-1)*x.a;
  }
int main()
{
    test p;
    p.gets();
    -p;
    p.out();
    return 0;
}
