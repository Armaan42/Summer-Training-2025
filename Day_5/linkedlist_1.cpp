#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next; //self referential pointer

};

void printLinkedList(node *head){
    node *temp = head;
    while( temp != NULL){
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

int main(){
    node *head = new node;
    head->data = 10;
    head->next = NULL;

    node *second = new node;
    second->data = 20;
    second->next = NULL;
    head->next = second;

    node *third = new node;
    third->data = 30;
    third->next = NULL;
    second->next = third;

    cout << head->data << endl;             // 10
    cout << second->data << endl;           // 20
    // cout << *(head->next) << endl;          // error
    cout << head->next->next << endl;       // Address of third
    cout << third << endl;                  // Address of third

    cout << (head->next)->data << endl;     // 20
    cout << head->next->next->data << endl; // 30

    cout << second->next << endl;           // Address of third
    cout << second->next << endl;           // Address of third
    cout << second->next->data << endl;     // 30
    cout << third->data << endl;            // 30

    node *tail = new node;
    tail->next = NULL;

    cout << endl;
    // cout << "Traversing of linkedlist: " << endl;
    // node *temp = head;
    // while(temp != NULL){
    //     cout << temp->data << " -> ";
    //     temp = temp->next;
    // }
    // cout << "NULL" << endl;

    printLinkedList(head);

    insertAtHead(head, 11);
    cout << endl;

    cout << "Inserting element at Head: " << endl;
    printLinkedList(head);
    cout << endl;

    

    delete head;
    delete second;
    delete third;

    return 0;
}