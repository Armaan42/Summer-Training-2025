#include<iostream>
#define size 5

using namespace std;

class myqueue {
public:
    int arr[size];
    int f;
    int r;

    myqueue() : f(-1), r(-1) {}

    void push(int x) {
        if (r == size - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        if (f == -1) f = 0;
        arr[++r] = x;
    }

    void pop() {
        if (empty()) {
            cout << "Queue Underflow\n";
            return;
        }
        f++;
        if (f > r) {
            f = -1;
            r = -1;
      }
    }

    bool empty() {
        return (f == -1 || f > r);
    }

    int front() {
        if (empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[f];
    }

    int rear() {
        if (empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[r];
    }
};

int main() {
    myqueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front: " << q.front() << endl; // 10
    cout << "Rear: " << q.rear() << endl;   // 30
    q.pop();
    cout << "Front after pop: " << q.front() << endl; // 20
    q.pop();
    q.pop();
    q.pop(); // Underflow
    return 0;
}