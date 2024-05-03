#include<iostream>
using namespace std;

class arith
{
    private:
         float a,b;
    public:
         void getdata();
         void display();
         float sum();
         float sub();
         float mul();
         float div();
         arith();
};

arith::arith(){
    cout<< "\n Enter two number : ";
    cin>> a >> b;
}
void arith::getdata()
{
    cout<< "\n Enter value of a and b : ";
    cin>> a >> b;
}
void arith::display()
{
    cout<< " \n Sum : "<< sum();
    cout<< "\n Subtraction : "<< sub();
    cout<< "\n Multiplication : "<< mul();
    cout<< "\n Division : "<< div();
}

float arith::sum()
{
    return(a + b);
}
float arith::sub()
{
    return(a - b);
}
float arith::mul()
{
    return(a * b);
}
float arith::div()
{
    return(a / b);
}

int main(){
    arith d;
    d.display();
   
    return 0;
}
