#include <bits/stdc++.h>
using namespace std;

const int lim = 10e6+5;
int tot[lim];

void totient(){
    for(int i = 0; i < lim; i++){
        tot[i] = i;
    }
    for(int i = 2; i < lim; i++){
        if(tot[i] == i){
            tot[i] -= 1;
            for(int j=2*i; j < lim; j+=i){
                tot[j] -= tot[j]/i;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    totient();
    while(t--){
        int n; cin >> n;
        cout << tot[n] << endl;
    }

    return 0;
}

/* ETF - Euler Totient Function
https://www.spoj.com/problems/ETF/ */
