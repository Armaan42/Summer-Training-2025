#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    // Push operation
    void push(int val) {
        Node* newnode = new Node(val);
        newnode->next = top;
        top = newnode;
    }

    // Pop operation
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1; // or throw an exception
        }
        Node* temp = top;
        int poppedValue = top->data;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    // Peek operation
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1; // or throw an exception
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Stack elements: ";
    s.display(); // Output: 30 20 10
    
    cout << "Top element: " << s.peek() << endl; // Output: 30
    
    cout << "Popped element: " << s.pop() << endl; // Output: 30
    cout << "Stack elements after pop: ";
    s.display(); // Output: 20 10
    
    return 0;
}