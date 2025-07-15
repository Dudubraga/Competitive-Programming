#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        if(a != b && a != c){ cout << a;}
        if(b != a && b != c){ cout << b;}
        if(c != a && c != b){ cout << c;}
        cout << endl;
    }

    return 0;
}
