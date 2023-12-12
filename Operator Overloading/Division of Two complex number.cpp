#include<iostream>
using namespace std;

class complex
{
    private: float a,b;
    public:
           complex( int x=0, int y=0)
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
           complex operator/(complex x)
           {
               complex w,y;
               w.a=x.a;
               w.b=y.b;
               y=w*x;
               int d;
               d=(x.a)*(x.a)-(x.b)*(x.b);
               w.a=y.a/d;
               w.b=y.b/d;
               return w;

           }

};
int main()
{
    complex p(3,2);
    complex q(1,2);

    complex t;
    t=p/q;

    p.out();
    q.out();
    t.out();
    return 0;
}
