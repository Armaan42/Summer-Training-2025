/*
malloc : malloc (memory allocation) is a fundamental function in C and C++ for dynamic memory management. 
It stands for "memory allocation" and is used to request a block of memory from the heap at runtime.

    - No access to memory space.
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int *p;
    p = malloc(sizeof(int));
    *p = 40;


    return 0;
}