#include<bits/stdc++.h>
using namespace std;

class test
{
    private: int x,y;
    public:
           test():x(0),y(0)
           {

           }
           test(int a, int b): x(a),y(b)
           {

           }
           void print()
           {
               cout<<x<<" "<<y<<endl;
           }
};
int main()
{
    test p;
    test q(3,2);
    p.print();
    q.print();
    return 0;
}
