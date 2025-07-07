/*
A linked list is a linear data structure where elements (called nodes) are stored in non-contiguous memory locations and connected via pointers.

malloc: malloc stands for memory allocation, it allocate memory dynamically.
    - it allocate memory in bytes.
    - we have to pass number of bytes we need to allocate dynamically.
    - it return NULL in case of fail to allocate memory.
    - it allocate contiguous number of blocks.
    - it return void pointer, so need to typecast it.
    - it define inside <stdlib.h> header file.

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int *arr = (int *)malloc(sizeof(int)*5);

    if(arr != NULL){
        cout << "Memory allocate successfully: " << endl;
    }
    else{
        cout << "Fail to allocate: " << endl;
    }
    
    for(int i=0; i<5; i++){
        cout << "arr[" << i << "]: ";
        cin >>  *(arr+i);
    }

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }cout << endl;

    free(arr); // use to deallocate memory which is allocated by malloc.
    arr = NULL; // use to avoid dangling pointer.

    return 0;
}