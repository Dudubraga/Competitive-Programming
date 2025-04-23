#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int, int>>times;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        times.push_back(make_pair(y, x));
    }
    sort(times.begin(), times.end());
    int count = 1, j = 0;
    for(int i = 1; i < n; i++){
        if(times[i].second >= times[j].first){
            count++; j = i;
        }
    }
    cout << count << endl;

    return 0;
}

