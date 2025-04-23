#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int, int>>dragon;
    pair<int, int>temp;
    int S, N, x, y;
    cin >> S >> N;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        temp.first = x;
        temp.second = y;
        dragon.push_back(temp);
    }
    sort(dragon.begin(), dragon.end());
    bool win = false;
    for(int j = 0; j < N; j++){
        if(S > dragon[j].first){
            win = true;
            S += dragon[j].second;
        }else{
            win = false;
        }
    }
    if(win == true){ cout << "YES" << endl; }
    else{ cout << "NO" << endl; }

    return 0;
}

