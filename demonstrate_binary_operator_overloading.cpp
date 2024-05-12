#include<iostream>
using namespace std;
class sample
{
	private:
		int m;
	public:
		sample();
		sample(int);
		sample operator-(sample);
		void display();
};
sample :: sample()
{
	m = 0;
}
sample :: sample(int n)
{
	m = n;
}
sample sample :: operator - (sample obj1)
{
	sample obj2;
	obj2.m = m-obj1.m;
	return(obj2);
}
void sample :: display()
{
	cout<<"m = "<<m<<endl;
}
int main()
{
	sample obj3(70), obj4(50);
	sample objs;
	objs=obj3 - obj4;
	obj3.display();
	obj4.display();
	objs.display();
    return 0;
} 
