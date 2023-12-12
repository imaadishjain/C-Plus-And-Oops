#include<iostream>
using namespace std;

inline void square( int r) // Iska Stack call nahi hoga
{
    cout<<"Square="<<r*r<<endl;
}

int main()
{
   int a;
   cout<<"Enter the value of a=";
   cin>>a;
   square(a);
   return 0;
}
