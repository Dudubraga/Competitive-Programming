/* Problem statement: https://www.spoj.com/problems/EKO/ */
#include <iostream>
#include <vector>   
#include <cmath>
using namespace std;

typedef long long ll;
vector<ll>trees;

ll cut(ll mid, ll key){
    ll wood = 0;
    for(ll i = 0; i < trees.size(); i++){
        if(trees[i] > mid){
            wood += trees[i] - mid;
        }
    }
    return wood;
}

ll Search(ll tree, ll key){
    ll high = tree, low = 1, mn = 10e9, best = 0;
    while(low <= high){
        ll mid = (high + low) / 2;
        ll wood = cut(mid, key);
        if(wood >= key){
            if(wood < mn){
                mn = wood;
                best = mid;
            }
            low = mid + 1;
        }
        else if(wood < key){ high = mid - 1; }
    }
    return best;
}

int main(){
    ll N, M, t;
    cin >> N >> M;
    ll mx = 0;
    for(ll i = 0; i < N; i++){
        cin >> t; 
        mx = max(mx, t); 
        trees.push_back(t);
    }
    ll result = Search(mx, M);
    cout << result << endl;

    return 0;
}

