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

void print(node *head){
    node *temp = head;
    
    while(temp != NULL){
        cout << temp->prev << "\t" << temp->data << "\t" << temp->next << endl;
        temp = temp->next;
    }
}

int main(){
    node *head = NULL;
    
    insert_head(head, 20);
    insert_head(head, 10);
    
    print(head);

    return 0;
}