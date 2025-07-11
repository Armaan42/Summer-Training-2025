/*
Template:
    - Template is a base of generic programming in c++.

Generic programming: Programming which is independent of data type is called generic programming.

- In c++, implementation of template is performed via two methods
    1. Generic function
    2. Generic class
*/

//function overloading: same function name with different parameters

#include<iostream>
using namespace std;

template<typename T, typename U>

auto sum(T a, U b){
    return a+b;
}

// float sum(float a, float b){
//     return a+b;
// }


// float sum(int a, float b){
//     return a+b;
// }

int main(){

    cout << "sum: " << sum(10, 20) << endl;
    cout << "sum: " << sum(10.5f, 20.5f) << endl;
    cout << "sum: " << sum(10.5, 20) << endl;
    cout << "sum: " << sum(10, 20.5f) << endl;


    return 0;
}