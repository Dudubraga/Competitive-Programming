/* Problem statement: https://www.spoj.com/problems/PRIME1/ */
#include <iostream>
#include <math.h>
using namespace std;

bool primes[1000000005];

void generate(int n){
    if(n % 2 == 0){ n++; }
    if(n == 1){ n+=2; }
    for(int i = n; i <= n+100000; i+=2){
        bool p = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){ p = false; break; }
        }
        primes[i] = p;
    }
    return;
}

int main(){
    primes[0] = false;
    primes[1] = false;
    primes[2] = true;
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        generate(n);
        for(int i = n; i <= m; i++){
            if(primes[i]){
                cout << i << endl;
            }
        }
        if(t != 0){ cout << endl; }
    }

    return 0;
}

