#include<iostream>
using namespace std;

int main()
{
    cout.width(6);
    cout<<1234;

    //Iska baad cout.width(6) ka roll khatam hojayag
    cout<<345;
    return 0;
}
