#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, int>lastP;
        int start = 0, previous = 0, ans = 0;
        for(int i = 1; i <= n; i++){
            int s; cin >> s;
            previous = lastP[s];
            start = max(start, previous);
            ans = max(i-start, ans);
            lastP[s] = i;
        }
        cout << ans << endl;
    }

    return 0;
}

/* 11572 - Unique Snowflakes
https://onlinejudge.org/external/115/11572.pdf */
