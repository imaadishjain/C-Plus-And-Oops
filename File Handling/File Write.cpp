#include<iostream>
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
};
int main()
{
    student p;
    p.get();
    ofstream f("abc.dat");

    f.write((char*)(&p),sizeof(p));  // p ka data file ma store hogaya

    f.close();
    return 0;
}
