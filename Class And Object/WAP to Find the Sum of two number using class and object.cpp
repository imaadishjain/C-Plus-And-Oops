#include<iostream>
using namespace std;

class sum
{
    private: int a,b,c; // Data member
    public:
        void gets() // Member Function
        {
            cout<<"Enter two number=";
            cin>>a>>b;
        }
        void cals() // Member Function
        {
            c=a+b;
        }
        void outs() //Member Function
        {
            cout<<"The  sum of two number is="<<c;
        }
};
int main()
{
    sum p; // Object or Variable
    p.gets();
    p.cals();
    p.outs();
    return 0;
}
