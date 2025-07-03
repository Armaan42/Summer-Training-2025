#include<iostream>
using namespace std;

void func(int num, int x){
    if(num > 10){
        return;
    }

    cout << num*x << endl;
    func(num+1, x);
}

int main(){
    func(1,12);
    return 0;
}