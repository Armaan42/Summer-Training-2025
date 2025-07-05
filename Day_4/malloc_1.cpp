#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int *p;

    //p = (int *)malloc(sizeof(int) * 5);
    p = new int;
    *p = 40;

    printf("%d\n", *p);

    //free(p);
    delete p;

    return 0;
}