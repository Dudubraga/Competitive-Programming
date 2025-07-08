#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    int T; cin >> T;
    while(T--){
        int n, m; cin >> n >> m;
        n -= 2; m -= 2;
        int a = n / 3;
        int b = m / 3;
        if(n % 3 != 0){ a += 1; }
        if(m % 3 != 0){ b += 1; }
        cout << a * b << endl;
    }

    return 0;
}
