#include<iostream>
using namespace std;

class father 
{
    private:
         char name[20];
         int age;
    public:
         char color[20];
         char gender;
         void getdata();
         void putdata();
};
void father::getdata()
{
    cout<< "\n Enter name : ";
    cin>> name;
    cout<< "\n Enter age : ";
    cin>> age;
    cout<< "\n Enter color : ";
    cin>> color;
    cout<< "\n Enter gender : ";
    cin>> gender;
}
void father::putdata()
{
    cout<< "\n Name : "<< name;
    cout<< "\n Age : "<< age;
    cout<< "\n Color : "<< color;
    cout<< "\n Gender : "<< gender;
}

class son:public father
{
    private:
          char qual[20];
          float sal;
    public:
         void input();
         void output();
};
void son::input()
{
    father::getdata();
    cout<< "\n Enter Qualification : ";
    cin>> qual;
    cout<< "\n Enter salary : ";
    cin>> sal;
}
void son::output()
{
    father::putdata();
    cout<< "\n Qualification : "<< qual;
    cout<< "\n Salary : "<< sal;
}

int main(){
    son d;
    d.input();
    d.output();
   
    return 0;
}