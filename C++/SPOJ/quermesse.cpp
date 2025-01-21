#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, t = 1;
    while(cin >> n && n != 0){
        int arr[n], w;
        for(int i = 1; i <= n; i++){
            cin >> arr[i-1];
            if(arr[i-1] == i){ w = i; }
        }
        cout << "Teste " << t << endl;
        cout << w << endl << endl;
        t++;
    }

    return 0;
}

/* QUERM - Quermesse
https://br.spoj.com/problems/QUERM/ */