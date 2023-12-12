#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int &b=32; //Invalid
    const int &b=32;
    cout<<b<<endl;
    // b=42; //Invalid
    return 0;
}