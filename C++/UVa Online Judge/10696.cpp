#include<iostream>
using namespace std;

int f91(int N){
    if(N <= 100){
        return f91(f91(N + 11));
    }
    if(N >= 101){
        return N - 10;
    }
    return N;
}

int main(){
    int N;
    while(1){
        cin >> N;
        if(N == 0){
            break;
        }
        int x = f91(N);
        cout << "f91(" << N << ") = " << x << endl;
    }

    return 0;
}

/* 10696 - f91
https://onlinejudge.org/external/106/10696.pdf */