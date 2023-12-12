#include<iostream>
using namespace std;

int main()
{
    float a,b,c;
    int i;
    for(i=1;i<=3;i++)
    {
        cout<<"Enter two number=";
        cin>>a>>b;
        try
        {
            if(b!=0)
            {
                c=a/b;
                cout<<"Division="<<c<<endl;
            }
            else
            {
                throw(b);
            }

        }
    catch(float x)
    {
        cout<<"Cannot divide by "<<x<<endl;
    }
  }

    return 0;
}
