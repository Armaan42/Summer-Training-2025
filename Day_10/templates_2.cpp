#include<iostream>
using namespace std;

template<class T, class U>

void swap(T &a, U &b){
    auto temp  = a;
    a = b;
    b = temp;
}

int main(){

    {
        float a = 12.4;
        float b = 14.6;
        cout << a << " " << b << endl;
        swap(a, b);
        cout << a << " " << b << endl;
    }

    {
        int a = 12.8;
        float b = 23.2;
        cout << a << " " << b << endl;
        swap(a, b);
        cout << a << " " << b << endl;
    }

    return 0;
}