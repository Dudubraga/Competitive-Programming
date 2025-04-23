#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    ll a[n], b[n], c[n], d[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    vector<ll>ab;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ab.push_back(a[i]+b[j]);
        }
    }
    sort(ab.begin(), ab.end());
    pair<vector<ll>::iterator, vector<ll>::iterator> p;
    ll sums = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            p = equal_range(ab.begin(), ab.end(), -(c[i]+d[j]));
            sums += ((p.second - ab.begin()) - (p.first - ab.begin()));
        }
    }
    cout << sums << endl;

    return 0;
}

