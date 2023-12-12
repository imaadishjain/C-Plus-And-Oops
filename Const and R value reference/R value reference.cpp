#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int &b=32; Invalid

    // const int &b=42; Valid but cannot change the value of b

    int &&b=32;
    cout<<b<<endl;
    b=42;
    cout<<b<<<endl;
    return 0;
}