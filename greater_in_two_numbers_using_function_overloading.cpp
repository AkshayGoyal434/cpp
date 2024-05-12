#include<iostream>
using namespace std;
class demo
{
	private:
		int a1, a2, ah;
		float b1, b2, bh;
		double d1, d2, dh;
	public:
		void getdata();
		int high(int, int);
		float high(float, float);
		double high(double, double);
		void display();
};
void demo :: getdata()
{
	cout<< "Enter two integers : ";
	cin>>a1>>a2;
	cout<<"Enter two float no. : ";
	cin>>b1>>b2;
	cout<<"Enter two double no. : ";
	cin>>d1>>d2;
}
int demo :: high(int a1, int a2)
{
if(a1>a2)
	return a1;
else
	return a2;
}
float demo :: high(float b1, float b2)
{
if(b1>b2)
	return b1;
else
	return b2;
}
double demo :: high(double d1, double d2)
{
if(d1>d2)
	return d1;
else
	return d2;
}
void demo :: display()
{
	ah = high(a1, a2);
	bh = high(b1, b2);
	dh = high(d1, d2);
	cout<<"The biggest of entered integer is : "<<ah<<endl;
	cout<<"The biggest of entered float no is : "<<bh<<endl;
	cout<<"The biggest of entered double no is : "<<dh<<endl;
}
int main()
{
	class demo obj ;
	obj.getdata();
	obj.display();
    return 0;
}
