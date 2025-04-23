#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>H;
    for(int i = 0; i < n; i++){
        int h; cin >> h;
        H.push_back(h);
    }
    sort(H.begin(), H.end());
    int max = 0, p;
    for(int i = 0; i < n/2; i++){
        p = (H[i] + H[n-i-1]) / 2;
        if(p > max){ max = p; }
    }
    cout << max << endl;

    return 0;
}