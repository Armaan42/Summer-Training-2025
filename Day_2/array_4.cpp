#include<iostream>
using namespace std;

int main(){
    
    char *ptr[3] = { "we", "are", "coders" };

    cout << *ptr << endl;
    cout << *(ptr+1) << endl;
    cout << *(ptr+2) << endl;
    cout << *(ptr+2)+3 << endl;
    // cout << *(ptr+2+3) << endl;

    return 0;
}