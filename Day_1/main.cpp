#include<iostream>
#pragma pack(1)
using namespace std;

class erangle{
    char name[11];
    double roll;
    char ch1;
};

int main(){
    erangle s1;
    cout << sizeof(s1);
    return 0;
}