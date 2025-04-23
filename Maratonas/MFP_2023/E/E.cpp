#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    int safe;
    for(int i = 0; i < 7; i++){
        int n; cin >> n;
        m[n]++;
    }
    cin >> safe;
    if(safe == 0 && m[1] % 2 == 0){
        cout << "N?" << endl;
    }
    else if(safe == 1 && m[1] % 2 != 0){
        cout << "N?" << endl;
    } 
    else {
        cout << "S" << endl;
    }

    return 0;
}