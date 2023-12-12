#include<iostream>
using namespace std;

class fact
{
    private: int n;
    public:
            void factf() //     Function or class ka naam same nahi ho sakta
            {
                int i,f=1,l;
                cout<<"Enter a number=";
                cin>>l;
                for(i=1;i<=l;i++)
                {
                    f=f*i;
                }
                cout<<"Factorial of a number is="<<f;
            }
};
int main()
{
    fact p;
    p.factf();
    return 0;
}
