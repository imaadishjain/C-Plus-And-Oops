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
    int roll;
    int t=0;

    cout<<"Enter the roll number=";
    cin>>roll;

    fstream f;
    f.open("student.dat",ios::in);
    while(f.read((char*)(&p),sizeof(p)))
    {
        if(p.getroll()==roll)
        {
            cout<<"Record Found\n";
            p.out();
            t++;
            break;
        }
    }
    if(t==0)
    {
        cout<<"Record Not Found";
    }
    return 0;

}
