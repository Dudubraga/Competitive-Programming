#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int J = 24, M = 23, r, j, m;
    vector<int>C(13, 4);
    cin >> j >> r;
    C[j-1]--; C[r-1]--;
    if(j > 10){ j = 10; }
    if(r > 10){ r = 10; }
    J -= r; J -= j;
    cin >> m >> r;
    C[m-1]--; C[r-1]--;
    if(m > 10){ m = 10; }
    if(r > 10){ r = 10; }
    M -= r; M -= m;

    for(int i = 0; i < n; i++){
        cin >> r;
        C[r-1]--;
        if(r > 10){ r = 10; }
        J -= r;
        M -= r;
    }
    int cont = -1;
    if(M > J && M > 10){
        cout << -1 << endl; 
    }else{
        m = M; j = J;
        while(m >= 0 && j >= 0){
            m--; j--; cont++;
        }
        while(C[cont-1] == 0 && cont <= 10){
            cont++;
        }
        if(cont > 10 || (23-M) + cont > 23){
            cout << -1 << endl;
        }else{
            cout << cont << endl;
        }
    }

    return 0;
}