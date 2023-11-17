#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int count = 0;
bool isPrime = true;

void Prime(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            isPrime = false;
            break;
        }
    }
}

int main(){
    int N;
    while(true){
        cin >> N;
        if(N == 0){ break; }
        for(int i = 2; i <= N; i++){
            isPrime = true;
            if(N % i == 0){
                Prime(i);
                if(isPrime == true){ count++; }
            }
        }
        cout << N << " : " << count << endl;
        count = 0; isPrime = true;
    }
    return 0;
}

/* 10699 - Count the factors
https://onlinejudge.org/external/106/10699.pdf */