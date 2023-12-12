#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>

using namespace std;

class student
{
    private: char name[10];
             int roll;

    public:
            void get()
            {
                cout<<"Enter Name=";
                cin>>name;

                cout<<"Enter Roll No.=";
                cin>>roll;
            }
            void out()
            {
                cout<<"Name="<<name<<" "<<"Roll No.="<<roll<<endl;
            }
            int getroll()
            {
                return roll;
            }
            char* getname()
            {
                return (name);
            }
};
int main()
{
    student p;
    int t=0;
    char ch[10];
    cout<<"Enter the name=";
    cin>>ch;

    fstream f;
    f.open("student.dat",ios::inh);

    while(f.read((char*)(&p),sizeof(p)))
    {
        if(strcmp(p.getname(),ch)==0)
        {
            cout<<"Record Found"<<endl;
            p.out();
            t++;
            break;
        }
    }
    if(t==0)
    {
       cout<<"Record not found";
    }
    f.close();
    return 0;
}
