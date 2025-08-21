/* Problem statement: https://codeforces.com/problemset/problem/1301/A */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        string a, b, c;
        cin >> a >> b >> c;
        bool v = true;
        for(int i = 0; i < a.size(); i++){
            if(c[i] != a[i] && c[i] != b[i]){
                v = false; break;
            }
        }
        if(v){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }    

    return 0;
}

