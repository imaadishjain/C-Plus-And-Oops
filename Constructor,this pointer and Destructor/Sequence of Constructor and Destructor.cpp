#include<iostream>
using namespace std;

class test
{
      public:
              test()
              {
                  cout<<"Constructor Called="<<this<<endl;
              }
              ~test()
              {
                  cout<<"Destructor Called="<<this<<endl;
              }
};
int main()
{
    {
     test p; // Constructor Called
     test q; // Constructor Called
     test r; // Constructor Called
     cout<<endl;
    } // Destructor Called
    return 0;
}

