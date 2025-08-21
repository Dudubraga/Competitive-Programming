/* Problem statement: https://codeforces.com/problemset/problem/230/B */
#include <iostream>
#include <math.h>
using namespace std;

typedef long long int lld;

bool isPrime(lld x){
    bool prime = true;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){ prime = false; }
    }
    return prime;
}

int main(){
    int n; cin >> n;
    bool tprime = true;
    while(n--){
        lld x; cin >> x;
        if(x < 4){
            cout << "NO" << endl;
        }else{
            lld i = sqrt(x); double j = sqrt(x);
            if(i == j && isPrime(i)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}

