//WAP to search element in an array and return the index must use recursive approach

#include<iostream>
using namespace std;

int search(int arr[5], int key){
    
    int n = sizeof(arr)/sizeof(int);

    if(n==0){
        return -1;
    }

    if(arr[0] == key){
        return 0;
    }

    
}

int main(){
    int arr[8] = {1,2,3,4,5};
    int key;
    cin >> key;

    cout << search(arr, key);
    return 0;
}