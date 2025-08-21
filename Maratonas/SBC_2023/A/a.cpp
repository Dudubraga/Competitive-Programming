/* Problem: A */
#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
typedef long long ll;

void solve(){}

int main(){ _
    int n, h; cin >> n >> h;
    int count = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(h >= a){ count++; }
    }
    cout << count << endl;

    return 0;
}
