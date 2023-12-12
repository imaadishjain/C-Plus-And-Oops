#include<iostream>
using namespace std;

class base
{
    protected: int a,b;

    public:
            void get()
            {
                cout<<"Enter Two  number=";
                cin>>a>>b;
            }
            void out()
            {
                cout<<"a="<<a<<endl;
                cout<<"b="<<b<<endl;
            }
};

class derived: public base
{
    protected: char name[10];
               int roll;

    public:
            void get()
            {
                cout<<"Enter name and roll no.=";
                cin>>name>>roll;
            }
            void out()
            {
                cout<<"Name="<<name<<endl;
                cout<<"Roll="<<roll<<endl;
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
    p->get();  // b.get();
    p->out();  // b.out();

    derived d;
    p=&d;   // Base ka pointer ma d ka address dala na

    p->get();  //  Derived class ma jo base ka section ha uska get() function run hoga
    p->out(); // Derived classs ma jo base ka section ha uska out() function run hoga

    //p->nkl(); // Error dega kyuki ya Function base ma nhai ha
    return 0;
}
