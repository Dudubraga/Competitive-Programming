#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
typedef long long ll;

const int MAXN = 10e5+1;
vector<ll>F(MAXN, -1);

ll fat(ll n){
    if(F[n] != -1){ return F[n]; }
    return n * fat(n-1);
}

int main(){ _
    F[1] = 1; F[2] = 2; F[3] = 6;
    ll n, k;
    while(cin >> n >> k){
        if(n == 0 && k == 0){ break; }
        ll r = fat(n) / (fat(k) * fat(n-k));
        cout << r << endl;
    }

    return 0;
}
