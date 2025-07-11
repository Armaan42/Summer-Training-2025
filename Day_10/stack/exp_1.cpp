#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    stack <char> s;

    for(char c: str){
        s.push(c);
    }

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }cout << endl;

    return 0;
}