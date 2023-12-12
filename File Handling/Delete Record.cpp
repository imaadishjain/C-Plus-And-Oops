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
  int r;
  cout<<"Enter the Roll number that you wantto delete=";
  cin>>r;

  fstream f;
  fstream g;

  f.open("student.dat",ios::in);
  g.open("pqr.dat",ios::out);

  while(f.read((char*)(&p),sizeof(p)))
  {
      if(p.getroll()!=r)
      {
          g.write((char*)(&p),sizeof(p));
      }
  }
  f.close();
  g.close();

  remove("student.dat");
  rename("pqr.dat","student.dat");

  f.open("student.dat",ios::in);
  while(f.read((char*)(&p),sizeof(p)))
        {
            p.out();
        }
        f.close();
        return 0;
}
