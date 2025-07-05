#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Data{
    int a;
    double b;
};

struct Data acc;

int main(){

    acc.a = 10;
    acc.b = 10.50;

    cout << acc.a << endl;
    cout << acc.b << endl;
    return 0;
}