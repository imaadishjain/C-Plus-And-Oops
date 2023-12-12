#include<iostream>
using namespace std;
void sum(int a,int b) // 1.Integer Arugments function
{
    int c;
    c=a+b;
    cout<<"Sum="<<c<<endl;
}
void sum(float a,float b) // 2. Float Arguments Function
{
    float c;
    c=a+b;
    cout<<"Sum="<<c<<endl;
}
/*int sum( int a,int b) Invalid Because name and argunment both are same
{                       Return type sa function differentiate nahi hota ha
     cout<<"HII\n";
}*/
int main()
{
    sum(3,4); // Integer wala ko call karaga
    sum(3.5f,5.3f); // Float wala ko call karaga
    return 0;
}
