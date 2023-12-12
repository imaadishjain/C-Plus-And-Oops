#include<iostream>
using namespace std;

class test
{
    public:
           test()  //Constructor
           {
               cout<<"Constructor Called="<<this<<endl;
           }
           ~test() //Destructor
           {
               cout<<"Destrucutor Called="<<this<<endl;
           }
};
int main()
{
    {

        test p; //  Constructor Called

    }           //  Destructor Called
    return 0;
}
