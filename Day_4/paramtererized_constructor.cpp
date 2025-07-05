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

        void printDetails(void){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
};

class Rectangle {
    int width, height;
public:
    // Parameterized constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    
    int area() { return width * height; }
};

int main() {
    Rectangle r(5, 3);  // Calls parameterized constructor
    cout << "Area: " << r.area() << endl;  // Output: Area: 15

    Data M1("Armaan", 20);
    M1.printDetails();
    
    return 0;
}