#include<iostream>
using namespace std;

class demo
{
    private:
         int a,b;
         float c;
    public:
         demo()
         {
            a = 0;
            b = 0;
            c = 0;           
         }
         demo(int x, int y, float z)
         {
            a = x;
            b = y;
            c = z;
         }
         demo(demo &d2)
         {
           a = d2.a;
           b = d2.b;
           c = d2.c;
         }
         void display();
         ~demo()
         {

         }
};

void demo::display()
{
   cout<< "\t a = "<< a;
   cout<< "\t b = "<< b;
   cout<< "\t c = "<< c;
}

int main()
{
   demo d1;
   demo d2(4,5,7.5);
   demo d3(d2);
   d1.display(); cout<<endl;
   d2.display(); cout<<endl;
   d3.display(); cout<<endl;

    return 0;
}