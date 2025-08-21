/* Problem statement: https://www.spoj.com/problems/PT07Z/ */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(vector<ll> graph[], ll no, vector<bool> &v, vector<ll> &dist){
    v[no] = true;
    for(auto w : graph[no]){
        if(!v[w]){
            dist[w] = 1 + dist[no];
            dfs(graph, w, v, dist);
        }
    }
}

int main(){
    ll n, u, v; cin >> n;
    vector<ll>tree[n+1];
    for(ll i = 0; i < n-1; i++){
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    vector<bool> visited1(n+1, false);
    vector<ll> dist1(n+1, 0);
    dfs(tree, 1, visited1, dist1);

    ll maxDist = -1, index = -1;
    for(int i = 1; i < n+1; i++){
        if(dist1[i] > maxDist){ maxDist = dist1[i]; index = i; }
    }
    
    vector<bool> visited2(n+1, false);
    vector<ll> dist2(n+1, 0);
    dfs(tree, index, visited2, dist2);
    
    maxDist = -1; index = -1;
    for(int i = 1; i < n+1; i++){
        if(dist2[i] > maxDist){ maxDist = dist2[i]; index = i; }
    }
    
    cout << maxDist << endl;

    return 0;
}

