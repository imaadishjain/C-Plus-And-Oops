#include<iostream>
using namespace std;

class graphic
{
    public: virtual void draw()
              {
                  cout<<"Graphic  Draw Called"<<endl;
              }

            virtual void show()=0;// Pure Virtual Function

};

class rect : public graphic
{
   public:
            void draw()
            {
                cout<<"Rectangle Draw Called"<<endl;
            }
            void show()
            {
                cout<<"Rectangle Show Called"<<endl;
            }

};
   class square: public graphic
   {
   public:
            void draw()
           {
               cout<<"Square draw called"<<endl;
           }
           void show()
           {
               cout<<"Square Show called"<<endl;
           }
   };

   int main()
   {
       graphic *p;

       rect r;
       p=&r;

       p->draw();
       p->show();

       square s;
       p=&s;

       p->draw();
       p->show();

       return 0;
   }
