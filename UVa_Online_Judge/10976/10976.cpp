/* Problem statement: https://onlinejudge.org/external/109/10976.pdf */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    while(cin >> k){
        vector<pair<int, int>>xy;
        for(int y = k+1; y <= 2*k; y++){
            if((k * y) % (y - k) == 0){
                xy.push_back(make_pair((k*y)/(y-k), y));
            }
        }
        cout << xy.size() << endl;
        for(auto i : xy){
            cout << "1/" << k << " = 1/" << i.first << " + 1/" << i.second << endl;
        }
    }

    return 0;
}

