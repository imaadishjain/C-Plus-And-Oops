 /*Multiple Inheritance is a concept through which we can derive
  a new class from a multiple base class*/



#include<iostream>
using namespace std;

class base1
{
    protected: int a;

    public:
          void get1()
          {
              cout<<"Enter First Number=";
              cin>>a;
          }
};
class base2
{
       protected: int b;

       public: void get2()
           {
               cout<<"Enter Second Number=";
               cin>>b;
           }
};
class derived: public base1,public base2
{
     protected: int c;

     public:
           void cals()
           {
               c=a+b;
           }
           void outs()
           {
               cout<<"Sum of the number is="<<c;
           }

};
int main()
{
    derived p;
    p.get1();
    p.get2();
    p.cals();
    p.outs();
    return 0;
}
