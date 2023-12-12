#include<iostream>
using namespace std;

class complex
{
    private: int a,b;
    public :
     complex() //Default Constructor (No Arguments)
    {
        a=0;
        b=0;
    }
    complex(int x,int y) // Parametrised Constructor
    {
       a=x;
       b=y;
    }
    complex (complex &x) // Copy Construtor (Reference Argument)
    {
        a=x.a;
                // Agar x sa lega toh woh phir sa ek constructor call karage jo ki invalid ha
        b=x.b;
    }
    void outs()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    ~complex()
    {

    }
};
int main()
{
    complex s; //Default Constructor Called
    complex p(3,2); // Parametrised Called

    complex q(p); //Copy Constructor Called (Passing Object as a Arguments)
    s.outs();
    p.outs();
    q.outs();
    return 0;
} // Destructor Called
