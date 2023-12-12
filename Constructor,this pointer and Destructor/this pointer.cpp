#include<iostream>
using namespace std;

class test
{
    private: int a;
    public:
          test()
          {
              a=5; //Implicit Way
              this->a=5;//Explicit Way
          }
          void outs()
          {
              cout<<"Value of a="<<a<<endl;
              cout<<"Value of a="<<this->a<<endl;

              cout<<"Address of Object Processig="<<this<<endl; //Provides the Address of Processing Object
          }
};
int main()
{
    test p;
    p.outs();
    return 0;
}
