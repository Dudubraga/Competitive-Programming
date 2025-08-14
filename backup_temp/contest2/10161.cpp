#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
typedef long long ll;

int main(){ _
    ll n;
    while(cin >> n && n != 0){
        ll q = 1;
        while(q*q < n){ q++; }
        ll x, y, z = q*q;
        if(q % 2 == 0){
            x = q; y = 1;
            for(ll i = 1; i < q && z != n; i++){
                z--; y++;
            }
            for(ll i = 1; i < q && z != n; i++){
                z--; x--;
            }
        } else {
            x = 1; y = q;
            for(ll i = 1; i < q && z != n; i++){
                z--; x++;
            }
            for(ll i = 1; i < q && z != n; i++){
                z--; y--;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}