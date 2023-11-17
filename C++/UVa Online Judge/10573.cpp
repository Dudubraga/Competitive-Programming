#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

const double pi = acos(-1);

int main(){
    int N, t, r1, r2;
    string input;
    double ans;

    cin >> N;
    cin.ignore();

    while(N--){
        getline(cin, input);
        if(sscanf(input.c_str(), "%d %d", &r1, &r2) == 2) ans = r1*r2*pi*2;
        else{
            sscanf(input.c_str(),"%d", &t);
            ans = (t * t * pi) / 8;
        }
        cout << fixed << setprecision(4) << ans << endl;
    }
    return 0;   
}

/* 10573 - Geometry Paradox
https://onlinejudge.org/external/105/10573.pdf */