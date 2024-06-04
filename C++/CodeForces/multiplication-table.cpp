#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int lld;
lld n, m, k, ans;

bool ver(lld mid){
    lld count = 0;
    for(int i = 1; i <= n; i++){
        count += min(mid / i, m);
    }
    if(count >= k){ return false; }
    return true;
}

lld binSearch(lld low, lld high){
    lld mid = (low + high) / 2;
    if(low > high){
        return ans;
    }
    if(ver(mid)){
        return binSearch(mid+1, high);
    }
    ans = mid;
    return binSearch(low, mid-1);
}

int main(){
    cin >> n >> m >> k;
     
    cout << binSearch(1, k) << endl;

    return 0;
}

/* 448D - Multiplication Table
https://codeforces.com/problemset/problem/448/D */
