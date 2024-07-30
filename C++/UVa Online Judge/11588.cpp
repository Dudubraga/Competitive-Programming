#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int r, c, m, n, tcase = 1;
    while(t--){
        cin >> r >> c >> m >> n;
        vector<int>priority(26,0);
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                char l; cin >> l;
                priority[l-65]++;
            }
        }
        sort(priority.begin(),priority.end());
        int bytes = 0; int ant = priority[25];
        for(auto i = 25; i >= 0; i--){
            if(i == 25){
                bytes += (priority[i] * m);
            }
            else if(priority[i] == ant){
                bytes += (priority[i] * m);
            }
            else{
                bytes += (priority[i] * n);
            }
        }
        cout << "Case " << tcase << ": " << bytes << endl;
        tcase++;
    }
    return 0;
}

/* 11588 - Image Coding
https://onlinejudge.org/external/115/11588.pdf */