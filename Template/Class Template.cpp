#include<iostream>
using namespace std;

template<class t>
class test
{
    private: t a, b;
    public:
          void gets()
          {
              cout<<"Enter two number=";
              cin>>a>>b;
          }
          void cals()
          {
              t c;
              c=a+b;
              cout<<"Sum of the number="<<c<<endl;
          }
};

int main()
{
    test<int> p;
    p.gets();
    p.cals();

    test<float>q;
    q.gets();
    q.cals();
    return 0;
}
