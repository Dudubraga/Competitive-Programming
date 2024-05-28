#include <iostream>
using namespace std;

typedef long long int lld;

int main(){
    int t; cin >> t;
    int tcase = 0;
    while(t--){
        tcase++;
        lld a, b, c;
        cin >> a >> b >> c;
        if(a + b > c && c + a > b && b + c > a){
            if(a == b && a == c && b == c){
                cout << "Case " << tcase << ": " << "Equilateral" << endl;
            }
            else if(a == b || a == c || b == c){
                cout << "Case " << tcase << ": " << "Isosceles" << endl;
            }else{
                cout << "Case " << tcase << ": " << "Scalene" << endl;
            }
        }else{
            cout << "Case " << tcase << ": " << "Invalid" << endl;
        }
    }

    return 0;
}

/* 11479 - Is this the easiest problem?
https://onlinejudge.org/external/114/11479.pdf */