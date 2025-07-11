/*
stack:
    stack is a linear data structure that follows the LIFO (last in first out) principles.
        - stack has one end only.
        - it contains only one pointer pointing to the topmost element of the stack.

    e.g.,
        - recursion
        - do and un-do mechanism.

    stack functions:
        1. push(): use to store element in stack.
        2. pop(): use to remove element from the top of the stack.
        3. top(): returs the element at the top of the stack without removing it.
        4. empty(): returns true if stack is empty otherwise false.
        5. size(): return number of elements of stack.
*/

#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }cout << endl;

    // cout << s.top() << endl;
    // s.pop();
    // s.pop();
    
    // cout<< s.top() << endl;
    cout << s.size() << endl;
    return 0;
}