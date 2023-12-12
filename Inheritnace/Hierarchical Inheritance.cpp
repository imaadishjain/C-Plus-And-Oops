 /*Heirarchical inheritance is the process through which we can
    derive a multiple new classes from a single base classes*/




#include<iostream>
using namespace std;

class base
{
    protected: int a;

    public:
           void gets()
            {
                cout<<"Enter the number=";
                cin>>a;
            };
};
class square: public base
{
    public :
            void outs()
            {
                cout<<"Square of a number="<<a*a<<endl;
            }
};
class fact: public base
{
      protected: int f;

      public:
             fact()
             {
                 f=1;
             }
             void outs()
             {
                 for(int i=1;i<=a;i++)
                 {
                     f=f*i;
                 }
                 cout<<"Factorial of a number is="<<f<<endl;
             }
};
int main()
{

    square p;
    p.gets();
    p.outs();
    fact q;
    q.gets();
    q.outs();
    return 0;
}
