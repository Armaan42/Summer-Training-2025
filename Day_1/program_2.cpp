/*
WAP to take name, roll and cgpa of two students and print it.
NOTE: Take data using getdata() function and print it using putdata() function.
*/

#include<iostream>
#include<string>
using namespace std;

class student{
    string name;
    int roll;
    float cgpa;

    public:

    void getdata(){
        cout << "Enter the name: ";
        getline(cin, name);
        cout << "Enter the Roll: ";
        cin >> roll;
        cout << "Enter the CGPA: ";
        cin >> cgpa;

        cin.ignore();
    }

    void putdata(){
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};


int main(){

    student s1, s2;
    cout << "Enter the details of the student" << endl;
    s1.getdata();
    cout << endl;

    cout << "Details of the student: " << endl;
    s1.putdata();

    cout << "Enter the details of the student" << endl;
    s2.getdata();
    cout << endl;

    cout << "Details of the student: " << endl;
    s2.putdata();
    return 0;
}