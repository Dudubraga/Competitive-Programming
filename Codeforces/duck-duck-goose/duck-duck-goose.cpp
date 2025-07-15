#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    int n, p, k; cin >> n >> p >> k;
    int c = p, i = 0;
    while(i < k+1){
        c++; i++;
        if(c > n){ c = 1; }
        if(c == p){
            c++;
            if(c > n){ c = 1; }
        }
    }
    cout << c << endl;

    return 0;
}
