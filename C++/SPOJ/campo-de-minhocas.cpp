#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, m; cin >> n >> m;
    int camp[n][m];
    int sumH[n]; memset(sumH, 0, sizeof(sumH)); 
    int sumV[m]; memset(sumV, 0, sizeof(sumV));
    int aux;
    for(int i = 0; i < n; i++){
        aux = i;
        for(int j = 0; j < m; j++){
            cin >> camp[i][j];
            sumH[i] += camp[i][j];
            sumV[j] += camp[i][j];
        }
    }
    int max = -1;
    for(int i = 0; i < n; i++){
        if(sumH[i] > max){ max = sumH[i]; }
    }
    for(int i = 0; i < m; i++){
        if(sumV[i] > max){ max = sumV[i]; }
    }
    cout << max << endl;;

    return 0;
}

/* MINHOCA - Campo de Minhocas
https://br.spoj.com/problems/MINHOCA/ */