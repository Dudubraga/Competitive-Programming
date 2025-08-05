#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

const int MAXN = 3*10e6;
vector<int>stMAX(4*MAXN, -1);
vector<int>stMIN(4*MAXN, -1);

void build(int v[], int i, int l, int r){
    if(l == r){
        stMIN[i] = v[l];
        stMAX[i] = v[l];
        return;
    }
    int mid = (l+r)/2;
    build(v, 2*i+1, l, mid); build(v, 2*i+2, mid+1, r);
    stMIN[i] = min(stMIN[2*i+1], stMIN[2*i+2]); 
    stMAX[i] = max(stMAX[2*i+1], stMAX[2*i+2]); 
}
int queryMAX(int A, int B, int i, int l, int r){
    if(r < A || l > B){ return 0; }
    if(l >= A && r <= B){ return stMAX[i]; }
    int mid = (l+r)/2;
    return max(queryMAX(A, B, 2*i+1, l, mid), queryMAX(A, B, 2*i+2, mid+1, r));
}
int queryMIN(int A, int B, int i, int l, int r){
    if(r < A || l > B){ return INT_MAX; }
    if(l >= A && r <= B){ return stMIN[i]; }
    int mid = (l+r)/2;
    return min(queryMIN(A, B, 2*i+1, l, mid), queryMIN(A, B, 2*i+2, mid+1, r));
}

int main(){ _
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int v[n];
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        build(v, 0, 0, n-1);
        int qnt = (k == 0) ? n : n-k-1;
        if(qnt <= 0){ qnt = 1; }
        int best = 0;
        for(int i = 0; i < qnt; i++){
            int dif = abs(queryMAX(i, i+k+1, 0, 0, n-1) - queryMIN(i, i+k+1, 0, 0, n-1));
            best = max(best, dif);
        }
        cout << best << endl;
    }

    return 0;
}
