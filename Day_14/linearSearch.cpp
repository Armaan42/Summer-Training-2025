// linear search

#include<iostream>
using namespace std;

int linearSearch(int arr[], int target, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin >> target;

    cout << linearSearch(arr, target, n) << endl;
    return 0;
}