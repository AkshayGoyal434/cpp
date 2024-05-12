#include<iostream>
#include<string.h>
using namespace std;
class first
{
	public:
		virtual void getdata();
		virtual void putdata();
};
class second : public first
{
	private:
		char str1 [10], str2[10];
	public:	void getdata();
			void putdata();
};
void first::getdata()
{
}
void first::putdata()
{
}
void second::getdata()
{
	cout<<"Enter first string  : ";
	gets(str1);
	cout<<"Enter second string : ";
	gets(str2);
}
void second::putdata()
{
	strcat(str1, str2);
	cout <<"The result of concating the given strings is : "<<str1;
}
int main()
{
	class first *ptr;
	class second obj;
	ptr = &obj;
	ptr -> getdata();
	ptr -> putdata();
return 0;

} 
