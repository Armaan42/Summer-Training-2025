#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {1,4,5,2,4,6,8,8};

    for(auto i : v){
        cout << i << " ";
    }cout << endl;

    sort(v.begin(), v.end());

    for(auto i : v){
        cout << i << " ";
    }

    return 0;
}