#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int score = 0, consec = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'O'){
                consec++;
                score += consec;
            } else {
                consec = 0;
            }
        }
        cout << score << endl;
    }

    return 0;
}
