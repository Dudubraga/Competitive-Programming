#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    int x, maxa = -1e9, maxb = -1e9;
    while(a--){
        cin >> x;
        maxa = max(x, maxa);
    }
    cin >> b;
    while(b--){
        cin >> x;
        maxb = max(x, maxb);
    }
    cout << maxa << " " << maxb << endl;

    return 0;
}

/* 1206A - Choose Two Numbers
https://codeforces.com/problemset/problem/1206/A */