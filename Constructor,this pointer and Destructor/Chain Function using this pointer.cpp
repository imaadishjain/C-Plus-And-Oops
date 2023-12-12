#include<bits/stdc++.h>
using namespace std;

class test
{
    private: int x,y;

    public:
        test()
        {

        }
           test(int x, int y)
           {
               this->x=x;
               this->y=y;
           }

           test& setsX(int x)
           {
               this->x=x;
               return *this;
           }
           test& setsY(int y)
           {
               this->y=y;
               return *this;
           }
           void gets()
           {
               cout<<x<<" "<<y<<endl;
           }
};
int main()
{
    test p(3,2);
    test q;

    q.setsX(5).setsY(6); // cout<<"Hii"<<"Good Morining\n";

    p.gets();
    q.gets();
    return 0;
}
