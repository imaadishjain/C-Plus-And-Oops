#include<bits/stdc++.h>
using namespace std;

class base
{
    protected:int x;
    
    public: 
             base()
             {
              cout<<"Hii\n";
             }
              base(int a)
              {
                x=a;
              }

};
class derived:public base
{
    private: int y;

    public:
       derived(int b)
       {
        y=b;
        cout<<"Derived Called\n";
        base(20);
       }
       void get()
       {
        cout<<x<<" "<<y<<endl;
       }
};
int main()
{
    derived p(10);
    p.get();
    return 0;
}