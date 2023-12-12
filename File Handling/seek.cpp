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

    fstream f;
    f.open("student.dat",ios::in);
    f.seekg(-32,ios::end);
    while(f.read((char*)(&p),sizeof(p)))
          {

              p.out();
          }

          return 0;
}
