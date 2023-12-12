#include<iostream>
using namespace std;

template<class t>
void sum(t a, t b)
{
    t c;
    c=a+b;
    cout<<"Sum of the Two number is="<<c<<endl;
}

int main()
{
    int x=2,y=3;
    float c=2.3,d=4.6;

    sum(x,y);
    sum(c,d);
    return 0;
}
