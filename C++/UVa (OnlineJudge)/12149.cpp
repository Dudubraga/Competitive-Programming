#include <iostream>
using namespace std;

int main(){
    int N, S;
    while(1){
        cin >> N;
        if(N == 0) break;
        int s1 = 1;
        int L = 2;
        for(int i = 1; i < N; i++){
            S = (L * L) + s1;
            s1 = S;
            L++;
        }
        if(N == 1) cout << 1 << endl;
        else cout << S << endl;
    }

    return 0;
}

/* 12149 - Feynman
https://onlinejudge.org/external/121/12149.pdf */