#include <iostream>
using namespace std;

int main(){
    int n, i = 1;
    cin >> n;
    while(n > 0){
        i = i * n;
        n -= 1;
    }
    cout << i << endl;

    return 0;
}

/* FATORIA2 - Fatorial
https://br.spoj.com/problems/FATORIA2/ */