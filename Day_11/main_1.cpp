#include<iostream>
using namespace std;

class Stack{
    public:
        class node{
            public:
                int data;
                node* next;

                node(int val): data(val), next(NULL){}
        };

        node* top;
        Stack()::top(NULL){};

        void pop();
        
        void push(int);

        void topEle();

        void display();

        bool empty();
};

void Stack::push(int val){
    node *newnode = new node(val);

    newnode->next = top;
    top = newnode;
}

void Stack::pop(){
    if(top == NULL){
        cout << "stack underflow" << endl;
        return;
    }
    node* temp = top;
    top = top->next;
    delete temp;
}

int Stack::topEle(){
    if(top == NULL){
        cout << "stack is empty" << endl;
        return -1;
    }
    return top->data;   
}

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

}