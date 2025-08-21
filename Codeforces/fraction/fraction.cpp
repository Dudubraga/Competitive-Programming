/* Problem statement: https://codeforces.com/contest/854/problem/A */
#include <iostream>
using namespace std;

bool coPrime(int a, int b){
    bool coPrime = true;
    for(int k = 2; k <= a; k++){
        if(a % k == 0 && b % k == 0){
            coPrime = false;
            break;
        }
    }

    return coPrime;
}

int main(){
    int N, a, b, frac = -1;
    cin >> N;
    for(int i = 1; i < (N/2)+1; i++){
        int j = N-i;
        if(coPrime(i, j) == true && i / j >= frac){
            frac = i / j;
            a = i;
            b = j;
        }
    } 
    cout << a << " " << b << endl;

    return 0;
}

