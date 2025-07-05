#include<iostream>
using namespace std;

class Data{
    public:
        string name;
        int age;
    
    Data(string name, int age){
        this->name = name;
        this->age = age;
    }

    Data(Data &refobj){
        this->name = refobj.name;
        this->age = refobj.age;

    }

    void printDetails(void){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main(){
    Data D1("abc", 1);
    D1.printDetails();

    cout << endl;

    Data D2(D1);
    D2.printDetails();
    return 0;
}




