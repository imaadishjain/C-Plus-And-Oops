   /* Its is the process of deriving a new class from the classes which
      derived from the same base class*/



#include<iostream>
using namespace std;

class student
{
    protected: char name[10];
               int roll;

    public:
           void gets()
           {
               cout<<"Enter Student name=";
               cin>>name;
               cout<<"Enter Student Roll No.";
               cin>>roll;
           }
};
class marks: virtual public student
{
     protected: int m[3];

    public: void gets()
          {
             cout<<"Enter the of Three Subject(out of 100)";
             for(int i=0;i<3;i++)
             {
                 cin>>m[i];
             }
          };
};
class sports: virtual public student
{
    protected: int s;

    public:
           void inc()
           {
               cout<<"Enter "<<name<<" Sports Marks=";
               cin>>s;
           }
};

class result: public marks, public sports
{
    protected: int t;
    public:
               result()
              {
                  t=0;
              }
               void total()
              {
                  for(int i=0;i<3;i++)
                  {
                      t=t+m[i];
                  }

              }
              void outs()
              {
                  cout<<"Name="<<name<<"\t"<<"Roll No.="<<roll<<endl;
                  cout<<"Total Marks="<<t+s;
              }
};
int main()
{
    result p;
    p.student::gets();
    p.marks::gets();
    p.inc();
    p.total();
    p.outs();
    return  0;
}

