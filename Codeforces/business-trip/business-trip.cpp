/* Problem statement: https://codeforces.com/contest/149/problem/A */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int k; cin >> k;
    int m[12], sum = 0;
    for(int i = 0; i < 12; i++){
        cin >> m[i];
        sum += m[i];
    }
    if(k == 0){ cout << 0 << endl; }
    else if(sum < k){ cout << -1 << endl;} 
    else {
        sort(m, (m + sizeof(m)/sizeof(m[0])));
        int ans = 0, i = 11;
        while(ans < k){
            ans += m[i]; i--;
        }
        cout << 12-i-1 << endl;
    }

    return 0;
}

