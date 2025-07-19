#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int curr = arr[i];
        int j = i - 1;

        while(j>=0 && arr[j] > curr){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

int main(){

    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    for(int elem : arr){
        cout << elem << " ";
    }
    cout << endl;
}