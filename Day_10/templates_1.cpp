/*
WA template function called TotalCount that takes an array, its size and a value of any data type as parameters. The function should return the number of times the value appears in the array.
*/

#include<iostream>
using namespace std;

template<typename T>

int TotalCount(T  arr[], int size, T value){
    int count = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == value){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1,2,3,3,4,5};
    char arr1[] = {'c', 'b', 'c', 'd', 'e', 'c'};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << TotalCount(arr, size, 3) << endl;
    cout << TotalCount(arr1, size, 'c') << endl;
    
    return 0;
}