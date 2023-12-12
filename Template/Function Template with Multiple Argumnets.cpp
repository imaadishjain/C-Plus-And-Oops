#include<iostream>
using namespace std;

template<class t, class u>
void write( t a, u b)
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    write(2,3.5);
    write(2,3);
    write(4,'a');
    write(8.2,1);
    write('a','A');
    return 0;
}

