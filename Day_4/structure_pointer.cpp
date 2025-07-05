#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Data{
    int a;
    float b;
};

struct Data *p;

int main(){
    // int *p;
    //p = malloc(sizeof(int))

    p = (struct Data*)malloc(sizeof(struct Data));
    (*p).a = 10;
    p -> b = 12.4;
    cout << (*p).a << "\t" << p -> b << endl;
    free(p);
    return 0;
}