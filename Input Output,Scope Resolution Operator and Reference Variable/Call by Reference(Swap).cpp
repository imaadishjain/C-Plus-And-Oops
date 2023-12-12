#include<iostream>
using namespace std;

void swap(int &p,int &q); //    Forward Declaration
int main()
{
    int a,b;
    cout<<"Enter the value of a=";
    cin>>a;
    cout<<"Enter the value of b=";
    cin>>b;
    swap(a,b); //Call by Reference
    cout<<"The Value of a="<<a<<endl<<"The Value of b="<<b;
    return 0;
}
void swap(int &p,int &q)
{
    int c;
    c=p;
    p=q;
    q=c;
}
