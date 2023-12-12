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
    int t;

    fstream f;

    f.open("student.dat",ios::in);
    t=f.tellg();
    cout<<"Position when we open the File="<<t<<endl;


    while(f.read((char*)(&p),sizeof(p)))
   {
    t=f.tellg();
    cout<<"Position="<<t<<endl;
   }
    f.close();
    return 0;
}
