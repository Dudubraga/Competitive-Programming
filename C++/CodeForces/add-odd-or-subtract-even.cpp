#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        if(a == b){ cout << 0; }
        else if(a < b && (b - a) % 2 == 0){ cout << 2; }
        else if(a > b && (a - b) % 2 != 0){ cout << 2; }
        else{ cout << 1; }
        cout << endl;
    }

    return 0;
}

/* 1311A - Add Odd or Subtract Even
https://codeforces.com/contest/1311/problem/A */