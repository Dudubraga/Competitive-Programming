/* Problem statement: https://onlinejudge.org/external/115/11526.pdf */
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

long long H(int n){
        if(n == 0) return 0;
        long long res = 0;
        int r = (int)floor(sqrt(n));
        if(r*r == n){ res += n/r; r--;}
        for( int i = 1; i <= r; i++ ){
                res += n/i;
                res += max(0, n/i - r);
        }
        return res;
}


int main(){
        int test, curr, ans;
        cin >> test;
        for(int i = 0; i < test; i++){
                cin >> curr;
                ans = H(curr);
                cout << H(curr) << endl;;
        }
        return 0;
}
