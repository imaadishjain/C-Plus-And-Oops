#include<iostream>
using namespace std;
int a=3; // Global Variable extern int a=3;
int main()
{
    int a=5; //Local variable auto int a=5;
    cout<<"The Local value of a="<<a<<endl; // 5 Local>Global
    cout<<"The  Global value of a="<<::a; // 3 because of scope operator
    {
        int a=7; // Local
        cout<<endl<<"The Local value of a="<<a<<"\n"; //7 Local>>Global
        cout<<"The Global value of a="<<::a; //3 because of scope operator
    }
    return 0;
}
