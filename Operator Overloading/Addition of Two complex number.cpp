#include<iostream>
using namespace std;

class complex
{
    private: int a,b;
    public:
            complex()
            {

            }
            complex( int x, int y)
            {
                a=x;
                b=y;
            }
            void out()
            {
                cout<<a<<"+"<<b<<"i"<<endl;
            }

            complex operator+(complex x)
            {
                complex w;
                w.a=a+x.a;
                w.b=b+x.b;
                return w;
            }
};
int main()
{
    complex p(3,2);
    complex q(4,5);

    complex t;

    t=p+q;  //t=p.operator+(q);
    p.out();
    q.out();
    t.out();

    return 0;
}
