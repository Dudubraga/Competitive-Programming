/* Problem statement: https://codeforces.com/contest/1295/problem/C */
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
        string s, t; cin >> s >> t;
        vector<vector<int>> v(26);
        for(int i = 0; i < s.size(); i++){
            v[s[i] - 'a'].pb(i);
        }
        int op = 1;
        int index = 0;
        for(int j = 0; j < t.size(); j++){
            int aux = t[j]-'a';
            if(v[aux].empty()){ 
                op = -1; break; 
            }
            if(index > v[aux][v[aux].size()-1]){ 
                index = 0;
                op++;
            }
            int pos = upper_bound(v[aux].begin(), v[aux].end(), index) - v[aux].begin();
            if(v[aux][pos-1] == index || pos == v[aux].size()){
                pos--; 
            }
            index = v[aux][pos]+1;
        }
        cout << op << endl;
    }

    return 0;
}
