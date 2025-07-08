#include<iostream>
using namespace std;

class btech{
    public:
        int roll;
        float cgpa;

        btech(): roll(555), cgpa(8.8){}

        void print(){
            cout << "Address using this keyword: " << this << endl;
        }
};

int main(){
    btech b1;
    cout << "Address of b1: " << &b1 << endl;
    b1.print();

    btech b2;
    cout << "Address of b1: " << &b2 << endl;
    b2.print();

    return 0;
}