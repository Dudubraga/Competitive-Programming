#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    int n, m; cin >> n >> m;
    int a;
    vector<int>b(m, 0);
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a < m){ b[a]--; }
    }
    for(int i = 0; i < m; i++){
        cout << n + b[i] << " ";
        n += b[i];
    } cout << endl;

    return 0;
}
