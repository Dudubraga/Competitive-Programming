/* Problem statement: https://codeforces.com/contest/1607/problem/C */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t, size, a;
    vector<int>vec;
    cin >> t;
    while(t--){
        cin >> size;
        for(int i = 0; i < size; i++){
            cin >> a; vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
        int max_min = -2e9, min = 2e9;
        for(int i = 1; i < vec.size(); i++){
            min = vec[i] - vec[i-1];
            if(min > max_min){
                max_min = min;
            }
        }
        max_min = max(vec[0], max_min);
        cout << max_min << endl;
        
        vec.clear();
    }

    return 0;
}

