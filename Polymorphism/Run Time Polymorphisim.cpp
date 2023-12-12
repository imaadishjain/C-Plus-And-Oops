#include<iostream>
using namespace std;

class base
{
    protected: int a,b;

    public:
             virtual void get()
             {
                 cout<<"Enter two number=";
                 cin>>a>>b;
             }
             virtual void out()
             {
                 cout<<"a="<<a<<endl;
                 cout<<"b="<<b<<endl;
             }
};
class derived: public base
{
    protected: char name[10];
               int roll;

    public:   void get()
            {
              cout<<"Enter name and roll=";
              cin>>name>>roll;
           }

            void out()
            {
                cout<<"Name="<<name<<endl;
                cout<<"Roll="<<roll;
            }
            void nkl()
            {
                cout<<"Hii";
            }
};
int main()
{
     base *p;

     base b;

     p=&b;

     p->get();
     p->out();

     derived d;

     p=&d;

     p->get();
     p->out();

     //p->nkl();  // Error dega kyuki ya function base ma nahi ha
     return 0;

}
