#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class base {
protected:
    char a[10];
public:
    void input();
    void output();
};

class derive1 : public virtual base {
protected:
    float c, d;
public:
    void input();
    void output();
};

class derive2 : public virtual base {
protected:
    int e, f;
public:
    void input();
    void output();
};

class derive3 : public derive1, public derive2 {
public:
    void input();
    void output();
};

void base::input() {
    cout << "Enter any string : ";
    cin.getline(a, 10);
}

void base::output() {
    cout << "The entered string is : " << endl << a << endl;
}

void derive1::input() {
    base::input();
    cout << "Enter any two float numbers : ";
    cin >> c >> d;
}

void derive1::output() {
    base::output();
    cout << "The entered float numbers are : " << endl << c << endl << d << endl;
}

void derive2::input() {
    base::input();
    cout << "Enter any two integers : ";
    cin >> e >> f;
}

void derive2::output() {
    base::output();
    cout << "The entered integers are : " << endl << e << endl << f << endl;
}

void derive3::input() {
    derive1::input();
    derive2::input();
}

void derive3::output() {
    derive1::output();
    derive2::output();
}

int main() {
    derive3 obj;
    obj.input();
    obj.output();
    return 0;
}
