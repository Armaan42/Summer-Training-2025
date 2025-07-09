#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *prev;
        node *next;

        node(int d): data(d), prev(NULL), next(NULL){}
};

void insert_head(node* &head, int data) {
    node* new_node = new node(data);
    if (head == NULL) {
        head = new_node;
    } else {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void delete_head(node* &head) {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    
    node* temp = head;
    head = head->next;
    
    if (head != NULL) {
        head->prev = NULL;
    }
    
    delete temp;
}

void delete_node(node* &head, int value) {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    
    node* current = head;
    
    // Find the node to delete
    while (current != NULL && current->data != value) {
        current = current->next;
    }
    
    if (current == NULL) {
        cout << "Value not found in the list." << endl;
        return;
    }
    
    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        head = current->next;
    }
    
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    
    delete current;
}

void delete_node_at_position(node* &head, int position) {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    
    node* current = head;
    int current_pos = 0;
    
    while (current != NULL && current_pos < position) {
        current = current->next;
        current_pos++;
    }
    
    if (current == NULL) {
        cout << "Position exceeds list size." << endl;
        return;
    }
    
    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        head = current->next;
    }
    
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    
    delete current;
}

void print(node *head){
    node *temp = head;
    
    while(temp != NULL){
        cout << temp->prev << "\t" << temp->data << "\t" << temp->next << endl;
        temp = temp->next;
    }
}

int main(){
    node *head = NULL;
    
    insert_head(head, 30);
    insert_head(head, 20);
    insert_head(head, 10);
    
    cout << "Original list:" << endl;
    print(head);
    
    cout << "\nAfter deleting head:" << endl;
    delete_head(head);
    print(head);
    
    cout << "\nAfter deleting node with value 30:" << endl;
    delete_node(head, 30);
    print(head);
    
    cout << "\nAfter deleting node at position 0:" << endl;
    delete_node_at_position(head, 0);
    print(head);
    
    return 0;
}