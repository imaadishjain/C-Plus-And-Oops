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

    tests &u=t;  // Declare and Initialize sath  ma karna hoga

    u.get();
    u.out();
    return 0;
}
