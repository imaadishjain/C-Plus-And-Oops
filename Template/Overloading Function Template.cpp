#include<iostream>
using namespace std;

template<class t>
void write(t a)
{
    cout<<a<<endl;
}

  // void write( t a ,int n) YA GALAT HA AAP KO new function ka liya new template banana hoga
template<class t>
void write( t a, int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<a<<endl;
    }
}
int main()
{
    write(2);
    write(3.5);
    write('a');

    write(3,2);
    write(2.5,3);
    write('A',5);
    return 0;
}
