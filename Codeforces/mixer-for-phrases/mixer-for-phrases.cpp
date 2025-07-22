#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    string S; cin >> S;
    int n = S.size();
    for(int i = 0; i < n; i+=2){
        cout << S[i];
    } cout << endl;
    for(int i = 1; i < n; i+=2){
        cout << S[i];
    } cout << endl;

    return 0;
}
