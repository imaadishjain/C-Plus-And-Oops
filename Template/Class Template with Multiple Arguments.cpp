#include<iostream>
using namespace std;

template<class t, class u>
class test
{
    private: t a;
             u b;

    public:

            void gets()
            {
                cout<<"Enter the Two Values"<<endl;
                cin>>a>>b;
            }
            void outs()
            {
                cout<<a<<" "<<b<<endl;
            }
};
int main()
{
    test<int, float> p;   // p ka a int bnagaya and p ka b float bnagaya
    p.gets();
    p.outs();

    test<float , char> q; // q ka a float bangay and p ka b char bangaya
    q.gets();
    q.outs();

    return 0;
}
