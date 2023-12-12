#include<iostream>
using namespace std;
 class student //Programmer
 {
      private:char name[10];
              int roll;
     public:
             void gets()
             {
                 cout<<"Enter Name=";
                 cin>>name;
                 cout<<"Enter Roll no.";
                 cin>>roll;
             }
             void outs()
             {
                 cout<<"Name of a Student="<<name<<endl;
                 cout<<"Roll of a Student="<<roll<<endl;
             }
 };
 int main() //User
 {
     student p[10]; //Arrray of Student
     int i,n;
     cout<<"Enter size=";
     cin>>n;
     cout<<"Enter Data"<<"\n";
     for(i=0;i<n;i++)
     {
         p[i].gets();
     }
     for(i=0;i<n;i++)
     {
        p[i].outs();
     }
     return 0;
 }
