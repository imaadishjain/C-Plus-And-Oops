#include<iostream>
using namespace std;

class test
{
   private: int a,b;

   public:
           test()
           {

           }
           test(int x, int y)
           {
               a=x;
               b=y;
           }
           void out()
           {
               cout<<a<<"+"<<b<<"i"<<endl;
           }
           void operator-()
           {
               a=(-1)*a;
               b=(-1)*b;
           }
           void operator+()
           {
               if(a>0)
               {
               a=(+1)*a;
               }
               else
               {
                   a=(-1)*a;
               }
               if(b>0)
               {
               b=(+1)*b;
               }
               else
               {
                   b=(-1)*b;
               }
           }
           void operator --()
           {
               a=a-1;
               b=b-1;
           }
           void operator ++()
           {
               a=a+1;
               b=b+1;
           }

};
int main()
{
    test p(3,2);
    -p; // p- nahi likh sakta
    p.out();

    +p; // p+ nahi likh sakta
    p.out();

    ++p; // p++ nahi likh sakta
    p.out();

    --p; // p-- nahi likh sakta
    p.out();
    return 0;
}

