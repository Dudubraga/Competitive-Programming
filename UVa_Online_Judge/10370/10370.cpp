#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

int main(){ _
    int c; cin >> c;
    while(c--){
        int n; cin >> n;
        vector<int>v(n);
        double avg = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            avg += v[i];
        }
        avg /= n;
        double count = 0;
        for(int i = 0; i < n; i++){
            if(v[i] > avg){
                count++;
            }
        }
        cout << fixed << setprecision(3) << count/n*100 << "%" << endl;
    }

    return 0;
}
