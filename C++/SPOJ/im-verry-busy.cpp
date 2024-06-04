#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, start, end; cin >> n;
        vector<pair<int, int>>schedule;
        for(int i = 0; i < n; i++){
            cin >> start >> end;
            schedule.push_back(make_pair(end, start));
        }
        sort(schedule.begin(), schedule.end());
        int ans = 0; start = -1;
        for(int i = 0; i < n; i++){
            if(schedule[i].second >= start){
                start = schedule[i].first;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

/* BUSYMAN - I AM VERY BUSY
https://www.spoj.com/problems/BUSYMAN/ */
