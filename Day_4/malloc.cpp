/*
malloc : malloc (memory allocation) is a fundamental function in C and C++ for dynamic memory management. 
It stands for "memory allocation" and is used to request a block of memory from the heap at runtime.

    - No access to memory space.
*/

#include <iostream>
#include <cstdlib>  // Required for malloc and free

using namespace std;

int main() {
    int *p;
    p = (int*)malloc(sizeof(int));  // Cast is needed in C++
    
    if (p == NULL) {  // Always check if allocation succeeded
        cerr << "Memory allocation failed!";
        return 1;
    }
    
    *p = 40;
    cout << "Allocated value: " << *p << endl;
    
    free(p);  // Don't forget to free the memory!
    p = NULL; // Good practice after freeing
    
    return 0;
}