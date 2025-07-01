// largest element in vector

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int main(){

    vector<int> v = {1,4,5,2,3};

    int max = INT_MIN;

    for(int i=0; i<v.size(); i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    cout << max;

    return 0;
}