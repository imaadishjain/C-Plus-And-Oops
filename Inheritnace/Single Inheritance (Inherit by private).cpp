#include<iostream>
using namespace std;

class base
{
    protected : int a,b;

      public:
            void gets()
            {
            cout<<"Enter two number=";
            cin>>a>>b;
            }
};
class derived : private base // No semicolon here
{
    public :
            void outs()
            {
                gets();
                cout<<"Two Number are="<<a<<","<<b;
            }
};
int main()
{
    derived p;
    p.outs();
    return 0;
}
