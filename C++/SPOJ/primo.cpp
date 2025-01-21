#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool primo(ll n){
    if(n % 2 == 0 && n > 2){ return false; }
    if(n <= 1){ return false; }
    for(int i = 3; i <= sqrt(n); i++){
        if(n % i == 0){ return false; }
    }
    return true;
}

int main(){
    ll n; cin >> n;
    if(n < 0){ n = -n; }
    if(primo(n)){
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }

    return 0;
}

/* PRIMO - Primo
https://br.spoj.com/problems/PRIMO/ */