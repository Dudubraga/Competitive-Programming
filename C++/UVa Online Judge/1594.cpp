#include <bits/stdc++.h>

using namespace std;

bool verify(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        if(v[i] != 0)return false;
    }
    return true;
}

int main() {
    int t;cin >> t;
    while(t--){
        map<vector<int>,int>mp;
        vector<int>v;
        int n;cin >> n;
        for(int i = 0; i < n; i++){
            int x;cin >> x;
            v.push_back(x);
        }
        vector<int>v2(n);
        while(true){
            for(int i = 0; i < n; i++){
                int result = abs(v[i] - v[(i+1)%n]);;
                v2[i] = result;
            }
            if(verify(v2)){
                cout << "ZERO" << endl;
                break;
            }
            if(mp[v2] == 1){
                cout << "LOOP" << endl;
                break;
            }
            else{
                mp[v2] = 1;
            }
            for(int i = 0; i < n; i++){
                v[i] = v2[i];
            }
        }
    }
    return 0;

}

/* 1594 - Ducci Sequence
https://onlinejudge.org/external/15/1594.pdf */
