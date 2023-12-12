#include<iostream>
using namespace std;

template<class t>
  t max1( t a, t b)
{
    return(a>b?a:b);
}
int main()
{
    cout<<max1(2,3)<<endl;
    cout<<max1(2.5f,1.5f)<<endl;
    cout<<max1('A','a')<<endl;
    return 0;
}
