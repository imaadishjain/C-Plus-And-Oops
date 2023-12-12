#include<iostream>
using namespace std;

class test
{
    private: static int a;

    public:
             static void sets(int x)
             {
                a=x;
             } 
             void change(int x)
             {
                a=x;
             }
             void gets()
             {
                cout<<a<<endl;
             }
};
 int test::a=8;
int main()
{
    test p;
    p.gets();
    return 0;

}