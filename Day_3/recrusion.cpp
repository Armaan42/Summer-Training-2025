#include<iostream>
using namespace std;

int num = 0;
int limit;

void func(){
    if(num == limit){
        return;
    }
    cout << "Hello World" << endl;
    num++;
    func();
}

int main(){
    cout << "Enter how many times to print Hello World: ";
    cin >> limit;
    func();
    return 0;
}

