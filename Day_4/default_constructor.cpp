#include<iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    
    // Default constructor
    Book() {
        title = "Unknown";
        author = "Anonymous";
        cout << "Default constructor called\n";
    }
};

int main() {
    Book b1;  // Calls default constructor
    cout << b1.title << " by " << b1.author << endl;
    // Output: Unknown by Anonymous
}