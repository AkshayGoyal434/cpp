#include<iostream>
using namespace std;

int main(){
    float num , den , arr[] = {0.0 ,0.0 ,0.0 ,0.0};
    int index;
    cout<< "\n Enter index values : ";
    cin>> index;
    try
    {
        if(index >= 4 || index < 0)
          throw "Error: out of bounds!";
          cout<< "\n Enter numenator : ";
          cin>> num;
          cout<< "\n Enter Dunominator : ";
          cin>> den;
        if(den == 0)
          throw 0;
          arr[index] = num/den;
          cout<< "\n Result = "<< arr[index];
    }
    catch(const char *msg)
    {
        cout<< msg;
    }
    catch(int n)
    {
        cout<< " \n can not devide by "<< n;
    }
    
    return 0;
}