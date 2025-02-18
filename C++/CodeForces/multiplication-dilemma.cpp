#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool special(int n){
    while(n > 9){
        if(n % 10 == 0){
            n %= 10;
        } else {
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        if(special(a)){
            if(special(b)){
                printf("%d x %d", a, b);
            } else {
                printf("%d x %d + %d x %d", a, (b/10)*10, a, b%10);
            }
        } else {
            printf("%d x %d + %d x %d", (a/10)*10, b, a%10, b);
        }
        cout << endl;
    }

    return 0;
}

/* 101972A - Multiplication Dilemma
https://codeforces.com/gym/101972/problem/A */