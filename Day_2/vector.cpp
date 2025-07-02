#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> *v = new vector<int>;

    v->push_back(10);
    (*v).push_back(20);

    v->resize(4);

    (*v)[2] = 30;
    (*v)[3] = 40;

    for(auto i : *v){
        cout << i << " ";
    }cout << endl;

    return 0;
}