#include <bits/stdc++.h>
using namespace std;

typedef pair<pair<int,int>,pair<int,int>> pii;

int main(){
    int t; cin >> t;
    while(t--){
        string path; cin >> path;
        pair<int,int> x = {0, 0}, y = {0, 0};
        map<pii, bool> mp;
        int count = 0;
        for(char dir : path){
            if(dir == 'N'){ y.second++; }
            if(dir == 'S'){ y.second--; }
            if(dir == 'E'){ y.first++; }
            if(dir == 'W'){ y.first--; }
            pii p1 = make_pair(x,y);
            pii p2 = make_pair(y,x);
            if(mp.count(p1) > 0){
                count++;
            }
            else if(mp.count(p2) > 0){
                count++;
            } else {
                mp[p1] = true;
                count += 5;
            }
            x = y;
        }
        cout << count << endl;
    }
    return 0;
}

