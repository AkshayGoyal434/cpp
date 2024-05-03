#include<iostream>
#include<string.h>
using namespace std;

class String
{
    private:
         char str[20];
    public:
         void getdata();
         void display();
         String operator +(String x);
};
void String::getdata(){
    cin>> str;
}
void String::display(){
    cout<< str;
}
String String::operator +(String x)
{
    String t;
    strcat(str,x.str);
    strcpy(t.str,str);
    return(t);
} 

int main(){
    String s1,s2,s3;
    cout<< "\n Enter first string : ";
    s1.getdata();
    cout<< "\n Enter second string : ";
    s2.getdata();
    s3 = s1 + s2;
    cout<< "\nConcatenated string is : ";
    s3.display();
   
    return 0;

}
