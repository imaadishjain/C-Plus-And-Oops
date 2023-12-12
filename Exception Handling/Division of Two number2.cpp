#include<iostream>
using namespace std;

void divide(float a, float b)
{
    try
    {
    if(b!=0)
    {
        cout<<a/b<<endl;
    }
    else
    {
        throw(b);
    }
    }
    catch( float x)
    {
        cout<<"Cannot divide by="<<x<<endl;
    }
}
int main()
{
        divide(4.5,2.9);
        divide(2.4,0);
        divide(4,2);
    return 0;
}
