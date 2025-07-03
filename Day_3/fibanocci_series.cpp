#include <iostream>
using namespace std;

int main() {
    int prev = 0;
    int curr = 1;
    int sum = 0;

    int i = 0;
    while (i < 5) {
        cout << prev << " ";  
        sum = prev + curr;    
        prev = curr;          
        curr = sum;          
        i++;                 
    }

    return 0;
}