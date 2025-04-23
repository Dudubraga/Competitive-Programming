#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    double M1, M2, X1, X2, F;
    cin >> M1 >> M2 >> X1 >> X2 >> F;
    double D = X2-X1;
    double G = (F * (D*D)) / (M1 * M2);

    cout << setprecision(10) << fixed << G << endl;


    return 0;
}