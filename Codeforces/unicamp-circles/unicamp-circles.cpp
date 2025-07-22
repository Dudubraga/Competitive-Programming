#include <bits/stdc++.h>
using namespace std;

#define _ ios::sync_with_stdio(0);cin.tie(0); 
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair

const double PI = 3.14159265359;

int main(){ _
    vector<double>r(3); cin >> r[0] >> r[1] >> r[2];
    int n, q; cin >> n >> q;
    while(q--){
        double c1, l1, c2, l2;
        cin >> c1 >> l1 >> c2 >> l2;
        c1--; c2--;
        double dif = min(abs(l1 - l2), (double)n-abs(l1-l2));
        
        double best = DBL_MAX;
        double r1 = r[c1], r2 = r[c2];
        for(int i = 0; i < 3; i++){
            double dist = abs(r1 - r[i]) + abs(r2 - r[i]) + dif * (r[i]*(2*PI/n));
            if(dist < best){ best = dist; }
        }
        cout << fixed << setprecision(10) << best << endl;
    }

    return 0;
}
