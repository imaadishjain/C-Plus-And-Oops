#include<iostream>
#include<stdio.h>
#include<fstream>

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
                return name;
            }
};
int main()
{
    student p;
    char ch;

    fstream f;
    f.open("student.dat",ios::out);
    do
    {
        p.get();
        f.write((char*)(&p),sizeof(p));
        cout<<"Do you want to enter another record(y/n)=";
        fflush(stdin);
        cin>>ch;
    }while(ch=='y' || ch=='Y');

    f.close();

    cout<<"Printing Record-"<<endl;

    f.open("student.dat",ios::in);
    while(f.read((char*)(&p),sizeof(p)))
          {
              p.out();
          }
          f.close();
    return 0;

}
