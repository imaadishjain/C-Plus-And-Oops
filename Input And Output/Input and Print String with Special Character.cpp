#include<iostream>
using namespace std;

int main()
{
    char name[10];
    char s[20]="Aadish Jain";
    cout<<"Enter Name=";

    //cin>>name; //It doesnot take special Character

    cin.getline(name,10); // Variable Size ko apan change apana hisab sa karsakta ha

    //cout<<name;
    cout.write(name,10); // Variable Size ko apan change apana hisab sa karsakta ha

    cout<<endl<<"Print only name=";
    cout.write(s,6);
    return 0;
}
