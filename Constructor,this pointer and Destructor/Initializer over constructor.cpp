#include<bits/stdc++.h>
using namespace std;

class test
{
   public:
           test()
           {
               cout<<"Default Constructor\n";
           }
           test(int x)
           {
               cout<<"Paramaterised Constructor\n";
           }
};
class Main
{
    private: test t;
    public:
           Main():t(10)
           {

           }
};
int main()
{
    Main p;
    return 0;
}

