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
    tests *p; // Decalartion
                             // tests *p=&t;
    p=&t; // Initiaization

    p->get();
    p->out();
    return 0;
}
