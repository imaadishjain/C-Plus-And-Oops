#include<bits/stdc++.h>
using namespace std;

class test
{
    private: int *ptr;

    public:
            test(int x)
            {
                ptr=new int(x);
            }
            void sets(int a)
            {
                *ptr=a;
            }
            void print()
            {
                cout<<"Value="<<*ptr<<endl;
            }
};
int main()
{
    test t1(10);
    test t2=t1;

    t1.print();
    t2.print();

    t2.sets(20);

    t1.print();
    t2.print();
    return 0;
}
