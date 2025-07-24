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
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            if(i != n-1){
                cout << v[i] << " ";
            } else {
                cout << v[i] << endl;
            }
        }
    } 

    return 0;
}
