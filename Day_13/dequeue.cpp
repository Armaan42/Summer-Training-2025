// dequeue using STL

#include <iostream>
#include <deque>

using namespace std;

int main() {
    // Initialize a deque
    deque<int> d;

    // Add elements to front and back
    d.push_back(1);    // Add to back
    d.push_front(2);   // Add to front

    // Print deque
    cout << "Deque: ";
    for (int num : d) {
        cout << num << " ";
    }
    cout << endl;  // Output: 2 1

    // Remove elements from front and back
    cout << "Popped back: " << d.back() << endl;   // Removes 1
    d.pop_back();
    cout << "Popped front: " << d.front() << endl; // Removes 2
    d.pop_front();

    cout << "Deque after popping: ";
    for (int num : d) {
        cout << num << " ";
    }
    cout << endl;  // Output: (empty)

    return 0;
}
