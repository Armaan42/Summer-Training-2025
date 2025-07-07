#include <iostream>
using namespace std;

class Example {
public:
    static int count;  // Static member variable (shared by all objects)

    Example() {
        count++;  // Increment count each time an object is created
    }

    // Static member function (can access only static members)
    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }
};

// Initialize static member (required outside the class)
int Example::count = 0;

// Function with static local variable
void demoStaticLocal() {
    static int callCount = 0;  // Persists between function calls
    callCount++;
    cout << "Function called " << callCount << " times" << endl;
}

int main() {
    // 1. Static Local Variable Demo
    cout << "--- Static Local Variable ---" << endl;
    demoStaticLocal();  // Output: Function called 1 times
    demoStaticLocal();  // Output: Function called 2 times

    // 2. Static Member Variable & Function Demo
    cout << "\n--- Static Class Member ---" << endl;
    Example obj1;
    Example::showCount();  // Output: Total objects created: 1

    Example obj2, obj3;
    Example::showCount();  // Output: Total objects created: 3

    return 0;
}