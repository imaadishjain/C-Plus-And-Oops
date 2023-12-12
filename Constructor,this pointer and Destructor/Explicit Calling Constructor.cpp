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
         complex(int x,int y)
         {
             a=x;
             b=y;
         }

    void outs()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
 };

 int  main()
 {
     complex p=complex();   // Explicit Calling
     complex q=complex(2);
     complex t=complex(3,2);
     p.outs();
     q.outs();
     t.outs();
     return 0;
 }
