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
    cout<<"Enter the record=";
    cin>>n;

    fstream f;
    f.open("student.dat",ios::in);

    f.seekg((n-1)*sizeof(p),ios::beg);

    f.read((char*)(&p),sizeof(p));
    p.out();
    f.close();
    return 0;
}
