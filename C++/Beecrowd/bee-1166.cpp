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

/* 1166 - Hanoi Tower Troubles Again!
https://www.beecrowd.com.br/judge/en/problems/view/1166 */