/* Problem statement: https://codeforces.com/problemset/problem/991/C */
#include <iostream>
using namespace std;

typedef long long ll;

ll eating(ll candies, ll x){
    candies -= x;
    ll vasya = x;
    while(candies >= 10){
        candies -= (candies / 10);
        candies -= x;
        vasya += x;
    }
    vasya += candies;
    return vasya;
}

ll search(ll n){
    ll low = 1, high = n, best = n+1;
    ll half = n / 2;
    if(n % 2 != 0){ half += 1; }
    while(low <= high){
        ll mid = (low + high) / 2;
        ll vasya = eating(n, mid);
        if(vasya >= half){
            if(mid < best){ best = mid; }
            high = mid - 1;
        }else{ low = mid + 1; }
    }
    return best;
}

int main(){
    ll n; cin >> n;
    if(n < 10){ cout << 1 << endl; }
    else{ cout << search(n) << endl; }

    return 0;
}

