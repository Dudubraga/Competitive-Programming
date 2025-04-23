#include <bits/stdc++.h>
using namespace std;

void search(int n, vector<int>f[], bool ver[]){
    if(ver[n] == true){ return; }
    ver[n] = true;
    for(int k = 0; k < f[n].size(); k++){
        search(f[n][k]-1, f, ver);
    }
}

int main(){
    int n, m; cin >> n >> m;
    vector<int>friends[n];
    int i, j;
    for(int k = 0; k < m; k++){
        cin >> i >> j;
        friends[i-1].push_back(j);
        friends[j-1].push_back(i);
    }
    bool ver[n] = {false};
    int groups = 0;
    for(int k = 0; k < n; k++){
        if(ver[k] == false){
            search(k, friends, ver);
            groups++;
        }
    }
    cout << groups << endl;

    return 0;
}

