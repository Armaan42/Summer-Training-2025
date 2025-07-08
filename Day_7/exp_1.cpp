#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *prev;
        node *next;

        node(int d): data(d), prev(NULL), next(NULL){}
};

void print(node *head){
    node *temp = head;
    
    while(temp != NULL){
        cout << temp->prev << "\t" << temp->data << "/t" << temp->next << endl;
        temp = temp->next;
    }
}

int main(){
    node *n1 = new node(10);

    node *n2 = new node(20);
    n1->next = n2;
    n2->prev = n1;

    print(n1);
    print(n2);

    return 0;
}