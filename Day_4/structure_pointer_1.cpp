#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Data{
    int a;
    int *p;
}*x;

int main(){
    
    x = new Data;
    x->a = 10;
    x->p = &(x->a);
    cout << x->p << "\t" << x->a << endl;
    delete x;

    return 0;
}