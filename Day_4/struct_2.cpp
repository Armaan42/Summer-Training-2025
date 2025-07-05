#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Data{
    int a;
    double b;
    int c;
};

union Science{
    int a;
    double b;
};

struct Data x;
union Science y;

int main(){
    cout << sizeof(x) << "B" << endl;
    cout << sizeof(y) << "B" << endl;

    x.a = 10;
    x.b = 15.2;
    cout << "Structure : " << x.a << "\t" << x.b << endl;

    y.a = 10;
    cout << "Union : " << y.a << endl;
    y.b = 15.2;

    cout << "Union : " << y.a << endl;
    cout << "Union : " << y.b << endl;
    cout << "Union : " << y.a << "\t" << y.b << endl;

    return 0;
}


