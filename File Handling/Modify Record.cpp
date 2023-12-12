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
    int n;
    int t;
    cout<<"Enter the record number=";
    cin>>n;

    fstream f;
    f.open("student.dat",ios::app);
    f.seekp(0,ios::beg);
    f.seekp((n-1)*sizeof(p),ios::beg);
    t=f.tellp();
    cout<<"Position="<<t<<endl;;
    p.get();

    f.write((char*)(&p),sizeof(p));

    f.close();


   f.open("student.dat",ios::in);

    while(f.read((char*)(&p),sizeof(p)));
    {
        cout<<"Position="<<t<<endl;

        p.out();
    }
    f.close();
    return 0;

}
