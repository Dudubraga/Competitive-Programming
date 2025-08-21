/* Problem statement: https://codeforces.com/gym/101755/problem/J */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n; cin >> n;
    vector<int> v (200005, 0);
    int x;
    while(n--){
        cin >> x;
        v[x]++;
    }
    int p = 0;
    for(int i : v){
        i /= 2;
        if(i > 0){ p += i; }
    }
    cout << p / 2 << endl;

    return 0;
}

