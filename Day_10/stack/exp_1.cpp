#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    stack <char> s;

    int i=0;
    while(i!=str.length()){
        s.push(str[i]);
        i++;
    }

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}