#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p = malloc(sizeof(int));
    *p = 40;
    printf("Value of allocated memory is %d\n", *p);
    free(p);

    return 0;
}

/*
No access to the memory space allocated by malloc
No access to the data stored in the memory space allocated by malloc
The memory cannot by reused or resized
4 byte of space will be wasted if the program ends here
The memory allocated by 'malloc' is not automatically freed(de-allocated) when the program ends
It is the programmer's responsibility to free the memory using 'free()' to avoid memory leaks
In this example, we do not free the memory, which is a potential memory leak.
*/