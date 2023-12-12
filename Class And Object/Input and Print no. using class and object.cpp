#include<iostream>
using namespace std;

class test
{
    private: int a; //Data Member
    public:
            void gets()  // Member Function
            {
                cout<<"Enter the value of a=";
                cin>>a;
            }
            void outs() // Member Function
            {
                cout<<"Printing a="<<a;
            }
};
int main()
{
    test p; // Object
    p.gets();
    p.outs();
    return 0;
}
