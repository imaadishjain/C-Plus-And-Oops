#include<iostream>
using namespace std;

class complex
{
    private: int a,b;

    public:
           complex(int x=0, int y=0)
           {
               a=x;
               b=y;
           }
           void out()
           {
               cout<<a<<"+"<<b<<"i"<<endl;
           }
        complex operator*(complex x)
        {
            complex w;
            w.a=(a*x.a) - (b*x.b);
            w.b=(a*x.b)+(b*x.a);
            return w;
        }
};
int main()
{
    complex p(3,2);
    complex q(4,3);
    complex t;

    t=p*q; // t=p.operator*(q);
    p.out();
    q.out();
    t.out();
    return 0;
}
