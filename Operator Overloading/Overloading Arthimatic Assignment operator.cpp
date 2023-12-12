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
            void operator +=(int n)
            {
                a=a+n;
                b=b+n;
            }
            void operator -=(int n)
            {
                a=a-n;
                b=b-n;
            }
            void operator *=(int n)
            {
                a=a*n;
                b=b*n;
            }
            void operator /=(int n)
            {
                a=a/n;
                b=b/n;
            }
            void operator %=(int n)
            {
                a=a%n;
                b=b%n;
            }
};
int main()
{
    complex p(4,8);
    p+=2;
    p.out();

    p-=2;
    p.out();

    p*=1;
    p.out();

    p/=2;
    p.out();

    p%=1;
    p.out();

    return 0;
}
