#include<iostream>
using namespace std;

class party{
    public:
        int samosa;
        int methai;
        string drink;

        // initializer list
        party(): samosa(2), methai(3), drink("Cold Coffee"){}
    
    // party(){
    //     samosa = 2;
    //     methai = 3;
    //     drink = "cold coffee";
    // }

    void print(){
        cout << "Samosa: " << samosa << endl;
        cout << "Sweets: " << methai << endl;
        cout << "Drink: " << drink << endl;
    }
};

int main(){
    party p1;
    p1.print();
    return 0;
}