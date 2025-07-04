#include <iostream>
using namespace std;

int sum(int arr[], int size) {  
    if (size == 0) {
        return 0;  
    }
    return arr[0] + sum(arr + 1, size - 1);  
}

int main() {
    int arr[5] = {10, 12, 45, 23, 77};
    int size = sizeof(arr) / sizeof(int);
    cout << sum(arr, size) << endl; 
    return 0;
}