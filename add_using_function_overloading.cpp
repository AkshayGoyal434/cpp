#include<iostream>
using namespace std;

class demo
{
    private:
         int a1,a2,as;
         float b1,b2,bs;
    public:
         void getdata();
         void display();
         int add(int,int);
         float add(float,float);
};
void demo::getdata()
{
    cout<< "\n Enter two integer number : ";
    cin>> a1 >> a2;
    cout<< "\n Enter two float number : ";
    cin>> b1 >> b2;
}
void demo::display()
{
    cout<< "\n Sum of integer numbers : "<< add(a1 , a2);
    cout<< "\n Sum of float number : "<< add(b1 , b2);
}
int demo::add(int a1 , int a2)
{
    as = a1 + a2;
    return(as);
}
float demo::add(float b1 , float b2)
{
    bs = b1 + b2;
    return(bs);
}

int main(){
    demo d;
    d.getdata();
    d.display();
   
    return 0;
}