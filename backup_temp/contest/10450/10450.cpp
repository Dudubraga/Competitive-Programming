#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    ll fib[52] = {0,2,3};
    for(int i = 3; i < 52; i++){
        fib[i] = fib[i-2] + fib[i-1];
    }
    int i = 1;
    while(t--){
        int n; cin >> n;
        cout << "Scenario #" << i <<":" << endl;
        cout << fib[n] << endl << endl;
        i++;
    }
    return 0;
}
// 10450 World cup noise - https://onlinejudge.org/external/104/10450.pdf