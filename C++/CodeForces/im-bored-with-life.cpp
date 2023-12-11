#include <iostream>
using namespace std;

int fat(int N){
    if(N == 1){ return 1; }
    return N * fat(N-1);
}

int main(){
    int A, B;
    cin >> A >> B;
    
    if(A > B){
        cout << fat(B) << endl;
    }else{
        cout << fat(A) << endl;
    }

    return 0;
}

/* 822B - I'm bored with life
https://codeforces.com/problemset/problem/822/A */