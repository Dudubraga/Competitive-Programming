#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(8);
    for (int i = 0; i < 8; i++){
        cin >> v[i];
    }
    bool validate = true;
    for (int i = 0; i < 8; i++){
        if (v[i] == 9){
            validate = false;
            break;
        }
    }
    if(validate){ cout << "S" << endl; }
    else{ cout << "F" << endl; }
    
    return 0;
}