#include<iostream>
using namespace std;
#define n 5

class myStack {
    int arr[n];
    int topIndex;

public:
    myStack() { topIndex = -1; }

    void push(int val) {
        if (topIndex == n - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++topIndex] = val;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        topIndex--;
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};

int main() {
    myStack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(30);
    st.push(30);
    cout << "Top element: " << st.top() << endl;

    st.pop();
    cout << "Top after one pop: " << st.top() << endl;

    while (!st.isEmpty()) {
        st.pop();
    }
    
    st.pop();

    return 0;
}