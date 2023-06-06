#include <iostream>
using namespace std;

int main(){
    int xp, nb, groups = 0;
    cin >> xp >> nb;

    while(xp + nb >= 3 && nb > 0 && xp > 0){
        if(xp > nb){
            xp -= 2;
            nb -=1;
            groups++;
        } else {
            xp -= 1;
            nb -= 2;
            groups++;
        }
    }
    cout << groups;

    return 0;
}

/* 519C - A and B and Team Training
https://codeforces.com/problemset/problem/519/C */