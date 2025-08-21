/* Problem statement: https://codeforces.com/contest/1213/problem/B */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    int n;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int lower = 1e9, bad = 0;
        for(int i = n-1; i >= 0; i--){
            if(arr[i] <= lower){ lower = arr[i]; }
            else{ bad++; }
        }
        cout << bad << endl;
    }

    return 0;
}

