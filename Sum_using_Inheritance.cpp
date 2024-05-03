#include<iostream>
using namespace std;
class first 
{
    protected:
         int a;
    public:
         void getdata(){
            cout<< "\n Enter value of a : ";
            cin>> a;
         }
         void putdata(){
            cout<< "\n value of a = "<< a;
         }
};

class second:public first
{
    private:
          int b;
    public:
         void input(){
            cout<< "\n Enter value of b : ";
            cin>> b;
         }
         void output(){
            cout<< "\n value of b = "<< b;
         }
         void add()
         {
            cout<< "\n Sum = "<< a+b;
         }
};

int main(){
    second d;
    d.getdata();
    d.input();
    d.putdata();
    d.output();
    d.add();
   
    return 0;
}