     /*Hybrid Inheritance=Multilevel+Multiple*/


#include<iostream>
using namespace std;

class student
{
    protected: char name[10];
               int roll;
    public:
               void gets()
               {
                   cout<<"Enter Student Name=";
                   cin>>name;
                   cout<<"Enter Roll No.";
                   cin>>roll;
               }
};
class marks: public student
{
    protected: int m[3];

    public:
        void gets()
        {
            int i=0;
            cout<<"Enter the marks of Three Subject(out of 100)";
            for(i=0;i<3;i++)
            {
                cin>>m[i];
            }
        }
};
class sports
{
 protected: int s;
    public:
           void inc()
           {
               cout<<"Enter Student Sports Marks=";
               cin>>s;
           };
};
class result:public marks, public sports
{
    protected: int t;
    public :
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
               cout<<"Total Marks="<<t<<"  Sports Marks="<<s<<endl;
           }
};
int main()
{
    result p;
    p.student::gets(); // No Embiguity Error
    p.marks::gets();   // No Embiguity Error
    p.inc();
    p.total();
    p.outs();
    return 0;
}
