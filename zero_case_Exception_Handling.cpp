#include<iostream>
using namespace std;

int main(){
    float num , den , res;
    cout<<"\n Enter numerator : ";
    cin>> num;
    cout<< "\n Enter Denominator : ";
    cin>> den;

    try
    {
        if(den==0)
          throw 0;
        res = num/den;
        cout<< "\n Result = " << res;
    }
    catch(int n)
    {
        cout<< "\n Denominator can not be " << n;
    }

    return 0;
    
}