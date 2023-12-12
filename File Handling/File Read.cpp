#include<iostream>
#include<fstream>
using namespace std;
class student
{
    private: char name[10];
             int roll;

    public:
            void out()
            {
                cout<<"Name="<<name<<endl;
                cout<<"Roll No.="<<roll<<endl;
            }
};
int main()
{

    student q;

    ifstream f("abc.dat");
    f.read((char*)(&q),sizeof(q)); // File ka data q ma store hogaya

    q.out();

    f.close();
    return 0;

}
