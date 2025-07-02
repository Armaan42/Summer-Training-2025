#include<iostream>
using namespace std;

int main(){
    
    char *ptr[3] = { "we", "are", "coders" };

    // int i = 0;
    // while(i<3){
    //     cout << *(ptr + i) << " ";
    //     i++;
    // }

    cout << &ptr[0] << endl;
    return 0;
}