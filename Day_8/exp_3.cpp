// delete node in series

#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;
    node(int d) : data(d), prev(NULL), next(NULL) {}
};

void insert_head(node* &head, int data) {
    node* new_node = new node(data);
    if (head) head->prev = new_node;
    new_node->next = head;
    head = new_node;
}

void delete_series(node* &head, int initial, int final) {
    node* current = head;
    int pos = 0;
    
    while (current && pos < initial) {
        current = current->next;
        pos++;
    }
    
    while (current && pos <= final) {
        node* temp = current;
        current = current->next;
        
        if (temp->prev) temp->prev->next = current;
        else head = current;
        
        if (current) current->prev = temp->prev;
        
        delete temp;
        pos++;
    }
}

void print(node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    
    for(int i = 5; i >= 1; i--) {
        insert_head(head, i);
    }
    
    print(head);
    
    delete_series(head, 2, 4);
    
    print(head);
    
    return 0;
}


// void delete_series(node* &head, int start, int end){
//     for(int i = start + 1; i<end; i++){
//         delete_at_position(head, i);
//     }
// }

