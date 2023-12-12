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

            void operator=( complex x) // Operator Overloading
            {
                a=x.a;
                b=x.b;
            }
};
int main()
{
    complex p(3,2);
    complex q;

    q=p; //q.operator=(p);

    p.out();
    q.out();
    return 0;
}

