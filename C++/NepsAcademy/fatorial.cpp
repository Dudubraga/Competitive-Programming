#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fat(ll n){
    if(n == 0 || n == 1){ return 1;}
    return n * fat(n-1);
}

int main(){
    ll n; cin >> n;
    cout << fat(n) << endl;

    return 0;
}

/* Fatorial
https://neps.academy/br/course/introducao-a-programacao/lesson/fatorial */