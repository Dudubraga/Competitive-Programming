/* Problem statement: https://br.spoj.com/problems/FATORIAL/ */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int M = 1000000000;

ll fat(ll n){
    ll ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
        while(ans % 10 == 0){
            ans /= 10;
        }
        ans %= M;
    }
    return ans % 10;
}

int main(){
    ll n, k = 1;
    while(cin >> n){
        cout << "Instancia " << k << endl;
        ll c = fat(n);
        cout << c << endl;
        k++;
    }

    return 0;
}

