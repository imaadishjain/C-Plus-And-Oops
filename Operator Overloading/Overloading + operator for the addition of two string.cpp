#include<iostream>
#include<string.h>
using namespace std;

class string1
{
    private: char a[40];

    public:
          void get()
          {
              cout<<"Enter First String=";
              cin>>a;
          }
          void out()
          {
              cout<<a<<endl;
          }
          string1 operator+(string1 x)
          {
              string1 w;
              strcpy(w.a,a);
              strcat(w.a,x.a);
              return w;
          }
};
int main()
{
    string1 p,q,t;

    p.get();
    q.get();

     t=p+q;
     p.out();
     q.out();
     t.out();
     return 0;
}
