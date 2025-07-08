#include<iostream>
using namespace std;

class btech{

    public:
        int roll;
        float cgpa;

        btech(){
            cout << "constructor having no parameter" << endl;
        }

        btech(int r){
            cout << "Constructor having one parameter" << endl;
        }

        btech(int r, float c){
            roll = r;
            cgpa = c;

            cout << "constructor having two parameter" << endl;
        }

        ~btech(){
            cout << "Distructor called" << endl;
        }
};

int main(){
    btech s1(13, 15.44);
    btech s2(32);
    btech s3;

    btech *s4 = new btech(10, 8.7);
    delete s4;
    
    return 0;
}