// implement a function to reverse double linked list

#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *prev;
        node *next;

    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(node* &head, int data){
    node* temp = new node(data);

    if( head == NULL ){
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
}

void reverse(node* &head){
    node* temp = NULL;
    node* curr = head;

    while(curr != NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }
    head = temp->prev;
}

void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    node *node1 = NULL;

    // node* head = node1;

    insertAtHead(node1, 20);
    insertAtHead(node1, 30);
    insertAtHead(node1, 40);
    insertAtHead(node1, 50);
    print(node1);

    return 0;
}


