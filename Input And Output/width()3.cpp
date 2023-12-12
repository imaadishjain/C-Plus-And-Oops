#include<iostream>
using namespace std;

int main()
{
    cout.width(3);
    cout<<1234; // Koi Allotment nahi hoga kyuki width<size

    cout<<endl;

    cout.width(3); //Koi Allotment nahi hoga kyuki width<size
    cout<<"Hii";
    return 0;
}
