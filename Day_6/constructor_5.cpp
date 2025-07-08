#include<iostream>
using namespace std;

class btech {
public:
    int sweets;
    static int stv;        // static variable
    int nonStatic;         // non-static variable was missinrm con  g in your original class

    btech() : nonStatic(10) {}  // constructor initializing nonStatic

    static void staticFun() {
        cout << "I am static Method: " << endl;
        cout << "Static var: " << stv << endl;
        // Cannot access nonStatic here - static functions can only access static members
    }

    void nonStaticFunc() {
        cout << "I am non-static Method: " << endl;
        cout << "Static var: " << stv << endl;
        cout << "Non static var: " << nonStatic << endl;
    }
};

int btech::stv = 2;  // static variable initialization

int main() {
    btech b1;
    
    // Calling static function (can be called without object)
    btech::staticFun();
    
    // Calling non-static function (requires object)
    b1.nonStaticFunc();
    
    return 0;
}