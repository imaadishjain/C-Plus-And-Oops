/*Nested class is  a classes which are declared inside
another class(enclosing class).Since nested class
is a member of a class it has all the right,properties
that the member of the class has.But the member of the
enclosing class doesnot have any right to access the member
nested class*/

#include<bits/stdc++.h>
using namespace std;

class A
{
    private : int a;
    public :
             void get()
             {
                 cout<<"Enter the value of a=";
                 cin>>a;
             }
             void out()
             {
                 cout<<"The value of a="<<a<<endl;
             }

    public:
            class B
            {
                private: int b;
                public:
                        void get()
                        {
                            cout<<"Enter the value of b=";
                            cin>>b;
                        }
                        void out()
                        {
                            cout<<"The value of b="<<b<<endl;
                        }
                public :
                      class C
                      {
                          private: int c;
                          public:
                                 void get()
                                 {
                                     cout<<"Enter the value of c=";
                                     cin>>c;
                                 }
                                 void out()
                                 {
                                     cout<<"The value of c="<<c<<endl;
                                 }
                      };
            };
};

int main()
{
    A p; // Object  of A
    A::B q; // Object of B
    A::B::C r; // Object of C
    p.get();p.out();
    q.get();q.out();
    r.get();r.out();
    return 0;
}
