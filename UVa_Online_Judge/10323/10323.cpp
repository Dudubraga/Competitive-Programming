/* Problem statement: https://onlinejudge.org/external/103/10323.pdf */
#include <iostream>
using namespace std;

typedef unsigned long long int ull;

int main(){
    int N;
    ull fact[] = {40320, 362880, 3628800, 39916800, 479001600, 6227020800};
    while(cin >> N){
        if(N > 13 || (N < 0 && abs(N) % 2 != 0)){ cout << "Overflow!" << endl; }
        else if(N < 8 || (N < 0 && abs(N) % 2 == 0)){ cout << "Underflow!" << endl; }
        else{ cout << fact[N - 8] << endl; }
    }
    
    return 0;
}

