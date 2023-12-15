#include <iostream>
#include <string.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, M, K;
    cin >> N >> M >> K;
    ll arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    ll l, r, val;
    ll op[M][3];
    for(int i = 0; i < M; i++){
        cin >> l >> r >> val;
        op[i][0] = l-1;
        op[i][1] = r-1;
        op[i][2] = val;
    }
    ll x, y, rep[M]; memset(rep, 0, sizeof(rep));
    for(int i = 0; i < K; i++){
        cin >> x >> y;
        rep[x-1]++;
        if(y < M){ rep[y]--; }
    }
    ll sum = 0, arrAux[M]; memset(arrAux, 0, sizeof(arrAux));
    for(int i = 0; i < M; i++){
        sum += rep[i];
        arrAux[i] += sum;
    }
    for(int i = 0; i < M; i++){
        op[i][2] *= arrAux[i];
    }
    ll arrR[N]; memset(arrR, 0, sizeof(arrR));
    for(int i = 0; i < M; i++){
        arrR[op[i][0]] += op[i][2];
        if(op[i][1] + 1 < N){
            arrR[op[i][1]+1] -= op[i][2];
        }
    }
    sum = 0;
    for(int i = 0; i < N; i++){
        sum += arrR[i];
        arr[i] += sum;
        cout << arr[i];
        if(i != N-1){ cout << " "; }
    } cout << endl;

    return 0;
}

/* 295A - Greg and Array
https://codeforces.com/contest/295/problem/A */
