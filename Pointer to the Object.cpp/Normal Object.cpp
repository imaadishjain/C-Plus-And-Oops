#include<iostream>
using namespace std;

class tests
{
    private: int a,b;

    public:
            void get()
            {
                cout<<"Enter two number=";
                cin>>a>>b;
            }
            void out()
            {
                cout<<"a="<<a<<endl;
                cout<<"b="<<b<<endl;
            }
};
int main()
{
    tests t;

    t.get();
    t.out();
    return 0;
}
