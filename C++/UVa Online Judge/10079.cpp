#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    while(cin >> N){
        if(N < 0){ break; }
        ll ans = (N * (N+1) / 2) + 1;
        cout << ans << endl;
    }

    return 0;
}

/* 10079 - Pizza Cutting
https://onlinejudge.org/external/100/10079.pdf */