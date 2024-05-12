#include <iostream>
using namespace std;
template<class T>
T square (T num)
{
	return (num * num);
}
int main()
{
int n = 4;
float m = 3.5;
cout<<square(n)<<endl; 	// instantiates int square(int)
cout<<endl;	
cout<<square (m) <<endl;	// instantiates float square(float)
cout<<endl;
return 0;
}
