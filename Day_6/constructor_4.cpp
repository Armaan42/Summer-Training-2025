#include<iostream>
using namespace std;

class btech{
    public:
        int sweets;
        static int stv;        // static variable
};

int btech::stv = 2;

int main(){
    btech b1;

    b1.stv = 5;
    cout << b1.stv << endl;

    return 0;
}