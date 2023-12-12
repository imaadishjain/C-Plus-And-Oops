#include<iostream>
using namespace std;

class test2;
class test1
{
    private: int a;
    public :
          void gets()
          {
              cout<<"Enter a number a=";
              cin>>a;
          }
          void outs()
          {
              cout<<"a="<<a<<endl;
          }
 friend void swap(test1 &x, test2 &y); // test2 class ko phela declare karchuka ha
} ;
class test2
{
    private: int b;
    public :
           void gets()
           {
               cout<<"Enter a number b=";
               cin>>b;
           }
           void outs()
           {
               cout<<"b="<<b;
           }
friend void swap(test1 &x, test2 &y);
};

  void swap(test1 &x, test2 &y)
  {
      int c;
      c=x.a;
      x.a=y.b;
      y.b=c;
  }
  int main()
  {
      test1 p;
      test2 q;
      p.gets();
      q.gets();
      swap(p,q); //Callling by Reference
      p.outs();
      q.outs();
      return 0;
  }
