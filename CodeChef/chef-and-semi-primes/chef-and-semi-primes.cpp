#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool primes[205];
vector<int>semiPrimes;

void gen_prime(){
    primes[0] = primes[1] = false;
    primes[2] = true;
    for(int i = 3; i <= 200; i++){
        bool p = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){ p = false; break; }
        }
        primes[i] = p;
    }
}

void gen_semi(){
    for(int i = 2; i <= 200; i++){
        for(int j = i; j <= 200; j++){
            if(primes[i] && primes[j] && i != j){
                semiPrimes.push_back(i * j);
            }
        }
    }
    return;
}

int main(){
    gen_prime();
    gen_semi();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool yes = false;
        for(int i = 0; i < semiPrimes.size(); i++){
            for(int j = 0; j < semiPrimes.size(); j++){
                if(semiPrimes[i] + semiPrimes[j] == n){ 
                    yes = true;
                }
            }
        }
        if(yes){ cout << "YES" << endl; }
        else{ cout << "NO" << endl; }
    }

    return 0;
}

