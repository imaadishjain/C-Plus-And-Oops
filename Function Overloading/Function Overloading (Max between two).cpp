#include<iostream>
using namespace std;

int max(int a,int b)
{
    return a>b?a:b;
}
float max(float a,float b)
{
    return a>b?a:b;
}
char max(char a,char b)
{
    return a>b?a:b;
}
int main()
{
    int i,f,c;
    cout<<"\t\t"<<max(3,5)<<endl;
    cout<<"\t\t"<<max(3.5f,5.3f)<<endl;
    cout<<"\t\t"<<max('a','A')<<endl;
    return 0;
}
