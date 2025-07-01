// finding sub-array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v = {1,3,4,5,3,2,4,5,6,7,8,4,2};

    int start;
    cin >> start;

    int end;
    cin >> end;

    for(int i=start; i<=end; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}