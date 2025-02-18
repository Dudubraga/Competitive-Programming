#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        /*
            left : x * b
            right : (a-1-x) * b
            above : y * a
            under : (b−1−y) * a
        */
        cout << max(max(x, a-1-x) * b, max(y, b-1-y) * a) << endl;
    }

    return 0;
}

/* 1315A - Dead Pixel
https://codeforces.com/contest/1315/problem/A */
