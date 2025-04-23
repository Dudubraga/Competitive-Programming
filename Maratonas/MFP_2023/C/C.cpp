#include <bits/stdc++.h>
using namespace std;

int main(){
    double m, d; cin >> d >> m;
    double D = sqrt(2) * d;
    double x = 0, y;
    bool up = false;
    while(m >= D){
        m -= D;
        x += d;
        up = !up;
    }
    if(m > 0){
        x += m * d / D;
        if(up){
            y = d - (m * d / D);
        } else {
            y = m * d / D;
        }
    }
    cout << setprecision(10) << fixed;
    cout << x << ' ' << y << endl;
    return 0;
}
