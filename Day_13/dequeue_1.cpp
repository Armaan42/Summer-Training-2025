//dequeue (manual implementation)

#include <iostream>
using namespace std;

class CircularDeque {
private:
    int *arr;
    int front, rear, size, capacity;

public:
    CircularDeque(int max_size) {
        capacity = max_size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void insertFront(int value) {
        if (isFull()) {
            cout << "Deque is full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + capacity) % capacity;
        }
        arr[front] = value;
        size++;
    }

    void insertRear(int value) {
        if (isFull()) {
            cout << "Deque is full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        arr[rear] = value;
        size++;
    }

    int deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        int value = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        size--;
        return value;
    }

    int deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return -1;
        }
        int value = arr[rear];
        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + capacity) % capacity;
        }
        size--;
        return value;
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }
        cout << "Deque: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % capacity;
        }
        cout << endl;
    }

    ~CircularDeque() {
        delete[] arr;
    }
};

int main() {
    CircularDeque cq(5);

    cq.insertFront(10);
    cq.insertRear(20);
    cq.insertFront(5);
    cq.display();  // Output: 5 10 20

    cout << "Deleted front: " << cq.deleteFront() << endl;  // 5
    cout << "Deleted rear: " << cq.deleteRear() << endl;    // 20
    cq.display();  // Output: 10

    return 0;
}
