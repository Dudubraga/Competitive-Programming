/* Problem statement: https://codeforces.com/problemset/problem/789/A */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double N, K, pebbles, pocket = 0;
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> pebbles;
        pocket += ceil(pebbles / K);
    }

    int days = ceil(pocket / 2);
    cout << days << endl;

    return 0;
}

