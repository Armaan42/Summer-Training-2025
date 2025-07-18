#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int n) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {  
        int mid = (s + e) / 2;  

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            s = mid + 1;  
        }
        else {
            e = mid - 1;  
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cin >> target;

    cout << binarySearch(arr, target, n) << endl;
    return 0;
}