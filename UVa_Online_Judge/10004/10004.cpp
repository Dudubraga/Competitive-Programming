/* Problem statement: https://onlinejudge.org/external/100/10004.pdf */
#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

bool bfs(vector<vector<int>>adj, int n){
    vector<int>c(n, -1);
    queue<int>q;
    for(int i = 0; i < n; i++){
        if(c[i] != -1){ continue; }
        c[i] = 0;
        q.push(i);
        while(!q.empty()){
            int v = q.front(); q.pop();
            for(int u : adj[v]){
                if(c[u] == -1){
                    c[u] = 1 - c[v];
                    q.push(u);
                } else if(c[u] == c[v]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){ _
    int n, l;
    while(cin >> n >> l && n != 0){
        vector<vector<int>>g(n);
        for(int i = 0; i < l; i++){
            int a, b; cin >> a >> b;
            g[a].pb(b);
            g[b].pb(a);
        }
        bool b = bfs(g, n);
        if(b){ cout << "BICOLORABLE." << endl; }
        else{ cout << "NOT BICOLORABLE." << endl; }
    }
    return 0;
}