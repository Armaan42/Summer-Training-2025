#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next; // self referential pointer
};

void printLinkedList(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtHead(node* &head, int value){
    node *newNode = new node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(node* &head, node* &tail, int value){
    node *newNode = new node();
    newNode->data = value;
    newNode->next = NULL;
    
    if(head == NULL){
        // If list is empty, new node is both head and tail
        head = tail = newNode;
    }
    else{
        // Link new node after current tail
        tail->next = newNode;
        tail = newNode; // Update tail to new node
    }
}

int main(){
    node *head = NULL;
    node *tail = NULL;
    
    // Insert initial nodes
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    
    cout << "Original list: ";
    printLinkedList(head);
    
    insertAtHead(head, 5);
    cout << "After inserting 5 at head: ";
    printLinkedList(head);
    
    insertAtTail(head, tail, 40);
    cout << "After inserting 40 at tail: ";
    printLinkedList(head);
    
    // Clean up memory
    node *current = head;
    while(current != NULL){
        node *temp = current;
        current = current->next;
        delete temp;
    }
    
    return 0;
}