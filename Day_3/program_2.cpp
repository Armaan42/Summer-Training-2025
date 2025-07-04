#include <iostream>
#include <string>
using namespace std;

void PrintPi(string str){
    if(str.length() == 0){
        return ;
    }

    if(str[0] == 'p' && str[1] == 'i'){
        cout << "3.14";
        PrintPi(str.substr(2));
    }
    else{
        cout << str[0];
        PrintPi(str.substr(1));
    }
}

int main() {
    string str = "lkfjepikjqrjnpiiervpiuybevpiubvpi";
    //int count = 0;

    // for(int i = 0; i < str.size() - 1; i++) { 
    //     if (str[i] == 'p' && str[i+1] == 'i') {
    //         count++;
    //         cout << "Found 'pi' at position " << i << endl;
    //     }
    // }

    // cout << "Total occurrences of 'pi': " << count << endl;

    PrintPi(str);
    cout << endl;

    return 0;


}

