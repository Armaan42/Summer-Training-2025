#include<iostream>
using namespace std;

template<typename T, typename U>

class info{
    public:
        T aa;
        U bb;

        info(T a, U b){
            this->aa = a;
            this->bb = b;
        }

        void print(){
            cout << aa << endl;
        }
};

int main(){
    info <int, int> obj1(12, 15);
    obj1.print();

    info <int, float> obj2(10, 12.4);
    obj2.print();

    return 0;
}