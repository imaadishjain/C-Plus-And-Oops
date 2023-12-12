#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    fstream f;

    f.open("Delete Record.cpp",ios::in);

    while(f.get(ch))
    {
        cout<<ch;
    }
    f.close();
    return 0;
}
