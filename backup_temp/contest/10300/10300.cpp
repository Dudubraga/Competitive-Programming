#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcase; 
    while(cin >> testcase){
        for(int i = 0; i < testcase; i++){
            int v; cin >> v;
            int ans = 0;
            for(int k = 0; k < v; k++){
                int m, n, c; cin >> m >> n >> c;
                ans += m*c;

            }
            cout << ans << endl;
        }
    }

    return 0;
}

// 10300 Ecological Premium - https://onlinejudge.org/external/103/10300.pdf
