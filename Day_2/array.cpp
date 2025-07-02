#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {1,2,3,4,5};

    int i = 0;

    while( arr[i]!=5 ){
        cout << &arr[i] << " - " << *(&arr[i]) << endl;        
        i++;
    }
    return 0;
}