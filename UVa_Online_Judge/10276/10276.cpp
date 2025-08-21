/* Problem statement: https://onlinejudge.org/external/102/10276.pdf */
#include <iostream>
using namespace std;

int main(){
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        cout << (((N+1) * (N+1)) / 2) - 1 << endl;
    }

    return 0;
}

