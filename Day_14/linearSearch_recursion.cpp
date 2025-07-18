// linear search using recursion

#include<iostream>
using namespace std;

int linearSearch(int arr[], int target, int s, int e){
    if(s > e){
        return -1;
    }

    if(arr[s] == target){
        return s;
    }

    return linearSearch(arr, target, s+1, e);
}

int main(){
    int arr[6] = {4,7,2,1,9,3};

    int idx = linearSearch(arr, 9, 0, 6);

    cout << idx << endl;
}