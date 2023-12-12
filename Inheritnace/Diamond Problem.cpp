#include<iostream>
using namespace std;

class A
{
    public: 
            A()
            {
                cout<<"A constructor called\n";
            }
};
class B: public A
{
    public: 
            B()
            {
                cout<<"B constructor called\n";
            }
};
class C: public A
{
    public: 
            C()
            {
                cout<<"C constructor called\n";
            }
};

class D: public A, public B
{
    public: 
            D()
            {
                cout<<"D constructor called\n";
            }
};

int main()
{
    D p;
    return 0;
}