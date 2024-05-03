#include<iostream>
using namespace std;
class second;
class first 
{
    private:
         int a,b;
    public:
         void getdata(){
            cout<< "\n Enter value of a and b : ";
            cin>> a >> b;
         }
         friend class second;
};

class second
{
    private:

    public:
         void big(first obj)
         {
            if(obj.a > obj.b)
                cout<< "greater number is : "<< obj.a;
            else
                cout<< "greater number is : "<< obj.b;
         }
};

int main(){
    first d1;
    d1.getdata();
    second d2;
    d2.big(d1);

   
    return 0;
}