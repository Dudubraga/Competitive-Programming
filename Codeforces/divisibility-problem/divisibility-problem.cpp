/* Problem statement: https://codeforces.com/problemset/problem/1328/A */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    int a, b;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        if(a % b == 0){
            cout << 0 << endl;
        } else {
            cout << b - (a % b) << endl;
        }
    }

    return 0;
}

