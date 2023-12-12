#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int &b=a; //Reference Variable (Declare and Initialize sath ma hota ha)


    cout<<"Value of a="<<a<<" Address of a="<<&a<<endl;
    cout<<"Value of b="<<b<<" Address of b="<<&b<<endl;

     a=4; //Address same rahaga par value change hojayagi
    cout<<endl;
    cout<<"Value of a="<<a<<" Address of a="<<&a<<endl;
    cout<<"Value of b="<<b<<" Address of b="<<&b<<endl;

    b=3;
    cout<<endl;
    cout<<"Value of a="<<a<<" Address of a="<<&a<<endl;
    cout<<"Value of b="<<b<<" Address of b="<<&b<<endl;

    return 0;
}
