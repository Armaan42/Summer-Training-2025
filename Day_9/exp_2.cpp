// cirular linkedlist

#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

        node(int d){
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }
};

void print(node* head){
    node* temp = head;

    while(temp->next != head){
        cout << temp->prev << "\t" << temp->data << "\t" << temp->next << endl;
        temp = temp->next;
    }
}

//insert tail function for doubly linkedlist

void insertAtTail(node* &head, int val){
    node* newnode = new node(val);

    if(head == NULL){
        newnode->prev = newnode;
        newnode->next = newnode;

        head=newnode;
        return;
    }

    newnode->prev = head->prev;
    newnode->next = head;

    head->prev->next = newnode;
    head->prev = newnode;
}

int main(){
    node* head = new node(10);

    head->prev = head;
    head->next = head;

    node* n2 = new node(20);
    n2->next = head;
    n2->prev = head;
    head->next = n2;
    head->prev = n2;

    node* n3 = new node(30);
    n3->next = head;
    n3->prev = head;
    head->next = n2;
    n2->next = n3;

    insertAtTail(head, 20);
    print(head);
    
    return 0;
}