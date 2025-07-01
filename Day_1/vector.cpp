#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.pop_back();


    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}

/*
Vector: Dynamic array is implemented using the std::vector container from STL
        we can change the sizeof vector during runtime.

        Important functions:
        1. push_back()
        2. pop_back()
        3. size()
        4. empty()
        5. clear()
        6. at()
        7. front()
        8. back()
        9. begin()
        10. end()
*/