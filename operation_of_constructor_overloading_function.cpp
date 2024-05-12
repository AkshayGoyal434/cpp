#include<iostream>
using namespace std;
class sample
{
	private:
		int x, y, h1;
		float a, b, c, avg1;
	public:
		sample();
		sample(int, int);
		sample(float, float, float);
		int high(int, int);
		float average (float, float, float);
		void display1();
		void display2();
		void display3();
};
sample :: sample()
{
	x = 0;
}
sample :: sample(int x1, int y1)
{
	x = x1;
	y = y1;
}
sample :: sample (float a1, float b1, float c1)
{
	a = a1;
	b = b1;
	c = c1;
}
int sample :: high (int x, int y)
{
	int h;
	if(x>y)
		h = x;
	else
		h = y;
		return (h);
}
float sample :: average(float a, float b, float c)
{
	float avg;
	avg = (a+b+c)/3;
	return (avg);
}
void sample :: display1()
{
	cout<<"The value initialized by constructor1 is :"<<x<<endl;
}
void sample :: display2()
{
h1 = high(x, y);
cout<<"The biggest of two numbers initialized by constructor2 is: "<<h1<<endl;
}
void sample :: display3()
{
avg1= average(a,b,c);
cout<<"The average of three float numbers initialized by constructor3 is : "<<avg1;
}
int main()
{
	class sample obj1, obj2(45, 78), obj3(1.1, 2.2, 3.3);
	obj1.display1();
	obj2.display2();
	obj3.display3();
return 0;

} 
