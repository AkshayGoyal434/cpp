#include<iostream>
using namespace std;

class book
{
    private:
        int bid;
        char bname[20];
        char auname[20];
        float bprice;
    public:
         void getdata();
         void putdata();
};
void book::getdata(){
    cout<< "\n Enter book id : ";
    cin>> bid;
    cout<< "\n Enter book name : ";
    cin>> bname;
    cout<< "\n Enter Auther name : ";
    cin>> auname;
    cout<< "\n Enter book price : ";
    cin>> bprice;
}
void book::putdata(){
    cout<< "\n Book ID : "<< bid;
    cout<< "\n Book Name : "<< bname;
    cout<< "\n Book Auther : "<< auname;
    cout<< "\n Book Price : "<< bprice;
}

int main(){
    book br[30];
    int i,n;
    cout<< "\n How many Record you want to Enter : ";
    cin>> n;
    cout<< "\n Enter Book Records";
    for(i=0;i<n;i++){
        cout<< "\n Enter Record Book Number : "<< i+1;
        br[i].getdata();
    }
    cout<< "\n ____Book Record____";
    for(i=0;i<n;i++){
        cout<< "\n Record of Book : "<< i+1;
        br[i].putdata();
    }
   

    return 0;

}
