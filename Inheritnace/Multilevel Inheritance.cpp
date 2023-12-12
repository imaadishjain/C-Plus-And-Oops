  /* Its is the process of deriving a new class from the another
     derive class*/


#include<iostream>
using namespace std;

class base
{
    protected: int a,b;

    public:
            void gets()
            {
                cout<<"Enter two Numbers=";
                cin>>a>>b;
            }
};
class derived1: public base
{
    protected: int c;

    public:
        void cals()
        {
            c=a+b;
        }
};
class derived2: public derived1
{
     public:
          void outs()
          {
              cout<<"Sum of two number is="<<c;
          }

};
int main()
{
    derived2 p;
    p.gets();
    p.cals();
    p.outs();
    return 0;
}
