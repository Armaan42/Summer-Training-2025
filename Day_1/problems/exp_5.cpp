#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {4,5,6,7,8};

    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<v2.size(); j++){
            if ( v1[i] == v2[j]){
                cout << v1[i]<< " ";
            } 
        }
    }
    return 0;
}