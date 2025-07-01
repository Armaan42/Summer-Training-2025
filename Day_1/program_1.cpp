//WAP to print student details roll and cgpa. NOTE:initialize roll and cgpa using constructor and print this
//detail via display function.
// roll and cgpa must be data member of btech class.

#include<iostream>
using namespace std;

class btech{
    int roll;
    float cgpa;

    public:
        //initializer list

    //     btech(int r, float c){
    //         roll = r;
    //         cgpa = c;
    //   }

    btech(int r, float c) : roll(r), cgpa(c){}

      void display(){
        cout << "Roll: " << roll << endl;
        cout << "Cgpa: " << cgpa << endl;
      }
};

int main(){
    btech s1(1, 9.6);
    s1.display();

    return 0;
}