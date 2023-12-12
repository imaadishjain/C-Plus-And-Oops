#include<iostream>
using namespace std;

class test
{
    int a; // By default private: int a;
    public: int b;
};
int main()
{
    test p;
    //p.a=4;  //Yaha par a ko acess nahi karsakta kyu ki a private ha
    p.b=5;
    //cout<<"The Value of a="<<p.a<<endl;
    cout<<"The Value of b="<<p.b<<endl;
    return 0;
}

