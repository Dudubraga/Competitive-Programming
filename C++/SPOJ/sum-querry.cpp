#include <iostream>
using namespace std;

int main(){
    int N, Q, i, j;
    cin >> N;
    int arr[N];
    for(int x = 0; x < N; x++){
        cin >> arr[x];
    }
    cin >> Q;
    for(int y = 0; y < Q; y++){
        cin >> i >> j;
        int sum = 0;
        for(int z = i; z <= j; z++){
            sum += arr[z];
        }
        cout << sum << endl;
    }
    
    return 0;
}

/* CSUMQ - Cumulative Sum Query
https://www.spoj.com/problems/CSUMQ/ */