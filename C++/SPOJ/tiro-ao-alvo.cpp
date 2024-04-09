#include <iostream>
using namespace std;
typedef long long int ll;

ll BinSearch(ll n, ll r[], ll p){
    if(p > r[n-1]){ return 0; }
    ll low = 0, high = n-1;
    while(low < high){
        ll mid = (low + high) / 2;
        if(p <= r[mid]){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }

    return n - high;
}

int main(){
    ll c, t; cin >> c >> t;
    ll alvo[c], points = 0, x, y;
    for(ll i = 0; i < c; i++){
        cin >> alvo[i];
        alvo[i] *= alvo[i];
    }
    for(ll i = 0; i < t; i++){
        cin >> x >> y;
        points += BinSearch(c, alvo, x*x + y*y);
    }
    cout << points << endl;

    return 0;
}

/* ALVO13 - Tiro ao Alvo
https://br.spoj.com/problems/ALVO13/ */