#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    char s[]="INDIA";
    char p[6]; // 5 dega nahi ek extra space '\0' ka liya rakhana
    int i;
    cout<<"Enter 5 Character Password"<<endl;
    for(i=0;i<5;i++)
    {
        p[i]=getch();
        putch('*');
    }
    if(strcmp(s,p)==0)
    {
        cout<<endl<<"Correct Password";
    }
    else
    {
        cout<<endl<<"Wrong Password";
    }
    return 0;

}
