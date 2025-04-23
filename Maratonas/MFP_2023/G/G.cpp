#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int lr[m][2];
    for(int i = 0; i < m; i++){
        cin >> lr[i][0] >> lr[i][1];
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << 1;
        } else {
            cout << 0;
        }
    } cout << endl;

    return 0;
}