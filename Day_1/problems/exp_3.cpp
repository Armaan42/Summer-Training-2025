// Reverse an vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    
    cout << "Before Reverse: ";

    for(auto i : v){
        cout << i << " ";
    }cout << endl;

    reverse(v.begin(), v.end());

    cout << "After Reverse: ";

    for(auto i : v){
        cout << i << " ";
    }

    return 0;
}