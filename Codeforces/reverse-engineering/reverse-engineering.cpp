/* Problem statement: https://codeforces.com/group/9CNwiex6Ir/contest/606592/problem/E */
#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    int n, m, a; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a;

            if(i%2==0 && j%2==0 && a%2==1){a++;} 
            if(i%2==1 && j%2==1 && a%2==1){a++;}

            if(i%2==0 && j%2==1 && a%2==0){a++;} 
            if(i%2==1 && j%2==0 && a%2==0){a++;}

            cout << a << " ";
        } cout << endl;
    }

    return 0;
}
