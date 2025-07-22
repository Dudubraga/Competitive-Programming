#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

const int MAXN = 2e5+5;
vector<int> g[MAXN];
int vis[MAXN];

int components = 0;
int aU = 0; // arestas uteis
int aI = 0; // arestas inuteis
int aE = 0; // arestas extra

void dfs(int u){
    vis[u] = 1;
    for(auto v : g[u]){ 
        if(!vis[v]){
            dfs(v); aU++;
        }
    }
}

int main(){ _
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--; b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i); components++;
        }
    }
    aI = m-aU;
    aE = components-1;
    if(aI == 0 && aE == 0){
        cout << "BOM" << endl;
    } else {
        cout << "RUIM " << aI << " " << aE << endl;
    }

    return 0;
}
