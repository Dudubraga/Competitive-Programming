#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, vf, vg;
    while(cin >> d >> vf >> vg){
        if(vf > vg){
            cout << "N" << endl;
        } else {
            float df = 12.0, dg = sqrt(d * d + df * df);
            float tf = df / vf;
            float tg = dg / vg;
            if(tf < tg){
                cout << "N" << endl;
            } else {
                cout << "S" << endl;
            }
        }
    }

    return 0;
}