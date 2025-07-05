#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main() {
    const float hello = 3.14;       // Constant value
    const float *helloPtr;          // Pointer-to-const (can point to const or non-const)
    helloPtr = &hello;              // OK - points to const
    
    // *helloPtr = 4.12;           // ERROR - can't modify through pointer-to-const
    
    float bolo = 22.97;             // Non-const variable
    helloPtr = &bolo;               // OK - pointer-to-const can point to non-const
    // *helloPtr = 11.9;           // STILL ERROR - can't modify through pointer-to-const
    
    // Correct way to modify bolo:
    float *nonConstPtr = &bolo;     // Non-const pointer
    *nonConstPtr = 11.9;            // OK - can modify through regular pointer
    
    cout << "hello: " << hello << endl;
    cout << "bolo: " << bolo << endl;
    
    return 0;
}