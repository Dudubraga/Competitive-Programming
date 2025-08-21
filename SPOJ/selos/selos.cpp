/* Problem statement: https://br.spoj.com/problems/SELOS11/ */
#include <iostream>
#include <cmath>
using namespace std;

int isPrime(long long n){
    if(n == 0 || n == 1){
        return 0;
    }
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            return 1;
        }
    }
    return 0;
}

int main(){
    long long N;
    cin >> N;
    int possible = isPrime(N);
    if(possible == 1) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}

