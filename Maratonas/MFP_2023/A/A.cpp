#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int n;
    while(t--){
        cin >> n;
        int P[n];
        int ans[n][n];
        for(int i = 0; i < n; i++){
            cin >> P[i]; P[i]--;
        }
        int k = 0;
        for(int i = 0; i < n; i++){
            ans[i][0] = i;
            k = i;
            for(int j = 1; j < n; j++){
                ans[i][j] = P[k];
                k = P[k];
                if(k == i){ break; }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j > 0 && ans[i][j] == ans[i][0]){
                    break;
                } else {
                    cout << ans[i][j]+1 << " ";
                }
            } cout << endl;
        }
    }

    return 0;
}