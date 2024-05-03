#include<iostream>
using namespace std;

class greatest
{
    private:
         int a,b,c,l;
    public:
         void getdata();
         void display();
         friend void big(greatest &d);
};

void greatest::getdata()
{
    cout<< "\n Enter three numbers : ";
    cin>> a >> b >> c;
}
void greatest::display()
{
    cout<< " \n Biggest number = "<< l;
}
void big(greatest &d)
{
    // if (d.a > d.b and d.a > d.c)
    // {
    //     d.l = d.a;
    // }else if (d.b > d.c and d.b > d.a)
    // {
    //     d.l = d.b;
    // }else{
    //     d.l = d.c;
    // }
    d.l = d.a;
    if(d.b > d.l)
        d.l = d.b;
    if(d.c > d.l)
        d.l = d.c;
}


int main(){
    greatest g;
    g.getdata();
    big(g);
    g.display();
   
    return 0;
}
