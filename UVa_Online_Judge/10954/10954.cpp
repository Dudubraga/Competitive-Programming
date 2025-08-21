/* Problem statement: https://onlinejudge.org/external/109/10954.pdf */
#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    int n;
    while(cin >> n && n != 0){
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            pq.push(a);
        }
        int costT = 0;
        while(pq.size() > 1){
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            costT += (x + y);
            pq.push(x+y);
        }
        cout << costT << endl;
    }   

    return 0;
}
