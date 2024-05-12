#include<iostream>
using namespace std;
template<class T>
class numbers
{
	private:
			T x1, x2, sum;
	public:
		void in();
		void out();
}; 				// End of class templates
template<class T>
void numbers<T> :: in()
{
	cout<<"Enter two numbers " <<endl;
	cin>>x1>>x2;
}
template<class T>
void numbers<T> :: out()
{
	T total;
	sum = x1 + x2;
	cout <<x1<<" + " <<x2<<" = " <<sum;
	cout<<endl;
}
int main()
{
	numbers <int> iob;
	numbers <float> fob;
	cout<<"Integer case ...... ";
	cout<<endl;
	iob.in();
	iob.out();
	cout<<endl;
	cout<<"Floating-point case ......";
	cout<<endl;
	fob.in();
	fob.out();
return 0;
}
