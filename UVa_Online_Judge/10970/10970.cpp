/* Problem statement: https://onlinejudge.org/external/109/10970.pdf */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, M;
    while(cin >> N >> M){
        int C = N * M;
        C--;
        cout << C << endl;
    }
    return 0;
}

