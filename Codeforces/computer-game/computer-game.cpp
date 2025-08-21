/* Problem statement: https://codeforces.com/contest/1183/problem/C */
#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ll q, n, k, a, b;
    cin >> q;
    while(q--){
        cin >> n >> k >> a >> b;
        n -= k * a;
        if(n > 0){
            cout << k << endl;
        }else{
            n = -n;
            ll dif = a - b;
            ll turns = (n + dif) / dif;
            if(turns > k){ cout << -1 << endl; }
            else{ cout << k - turns << endl; }
        }
    }

    return 0;
}

