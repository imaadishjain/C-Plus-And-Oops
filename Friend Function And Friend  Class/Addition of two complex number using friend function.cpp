#include<iostream>
using namespace std;

class complex
{
    private: int a,b;
    public:
          void gets()
          {
              cout<<"Enter the Real Part and Imaginary Part=";
              cin>>a>>b;
              outs();
          }
          void outs()
          {
              cout<<a<<"+i"<<b<<endl;
          }
  friend complex sums(complex x,complex y); // Declaration
};

  complex sums(complex x, complex y) // Friend Function access class private data
  {
      complex w;
      w.a=x.a+y.a;
      w.b=x.b+y.b;
      return w; // Return Object
  }
  int main()
  {
      complex p,q,t;
      p.gets();  //  Call Memeber Function
      q.gets();
      t=sums(p,q); // Calling Friend Function i.e Normal Function
      cout<<"Performing Addition"<<endl;
      p.outs();
      q.outs();
      cout<<"Ans=";
      t.outs();
  }


