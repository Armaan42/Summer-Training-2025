/*
Constructor: constuctor are the function define inside class and function name must be same as class name.
    - constructor did not have any return type.
    - we can not call constructor function, it was invoke when object of a class is created.
    - constructor can be overload.

Types of constructor:
    1. Default constructor (or Non-parameterised constructor):
        - Constructor did not have any parameter is called default constructor.

    2. Parameterised constructor:
        - Constructor having parameter is called parametersized constructor.

    3. copy constructor:
        - A constructor that initialized an object using another object of the same class.

NOTE:- For every constructor call, there must have constructor definition otherwise it shows an error.

Distructor:
    - It is use to destroy the object.
    - in other word it deallocate memory allocated by constructor.

this keyword:
    - this keyword is a constant pointer which contain address of current object.

static data member:
    - It define using static keyword.
    - when static is used with data member in a class, it makes the variable shared among all instances of the class.
*/

#include<iostream>
using namespace std;

class btech{
    public:
        int roll;
        float cgpa;

        btech(){
            cout << "I am default constructor" << endl;
        }
};

int main(){
    btech n1, n2, n3, n4;       // static allocation
    btech *s = new btech();     // Dynamic allocation


    return 0;
}