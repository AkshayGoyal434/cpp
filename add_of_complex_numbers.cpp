#include<iostream>
using namespace std;

class complex 
{
    private:
         int real,img;
    public:
         void getdata();
         void display();
         void add(complex c2);
};

void complex::getdata()
{
    cout<< "\n Enter real part : ";
    cin>> real;
    cout<< "\n Enter Imaginay part : ";
    cin>> img; 
}

void complex::display()
{
    cout<< real <<"+" << img <<"i";
}

void complex::add(complex c2)
{
    complex temp;
    temp.real = real + c2.real;
    temp.img = img + c2.img;
    cout<< temp.real <<"+" <<temp.img <<"i";
}

int main(){
    complex c1,c2;
    cout<< "\n Enter First complex number : ";
    c1.getdata();
    cout<< "\n Enter second complex number : ";
    c2.getdata();
    c1.add(c2);
   
   
    return 0;
}
