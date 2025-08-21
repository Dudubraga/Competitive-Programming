/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/2973 */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 1e5+1;
ll n, c, t;
int pipocas[MAX];

bool possible(ll chute){
    int comp = 1;
    ll resta = t * chute;
    for(int i = 0; i < n; i++){
        if(resta >= pipocas[i]){ resta -= pipocas[i]; }
        else{
            comp++;
            resta = t * chute;
            i--;
        }
        if(comp > c){ return false; }
    }
    return true;
}

int main(){
    cin >> n >> c >> t;
    for(int i = 0; i < n; i++){
        cin >> pipocas[i];
    }
    int l = 0, r = 10e9+1;
    while(l < r){
        int m = (l + r) / 2;
        if(!possible(m)){ l = m + 1; }
        else{ r = m; }
    }
    cout << l << endl;

    return 0;
}

