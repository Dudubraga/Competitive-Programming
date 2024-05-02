#include <iostream>
using namespace std;

int x, y, d;

void Euclid(int a, int b){
    if(b == 0){
        x = 1;
        y = 0;
        d = a;
        return ;
    }
    Euclid(b, a % b);
    int aux1 = y;
    int aux2 = x - (a/b) * y;
    
    x = aux1;
    y = aux2;
}

int main(){
    int a, b;
    while(cin >> a >> b){
        Euclid(a,b);
        cout << x <<  " " << y <<  " " << d << endl;
    }

    return 0;
}

/* 10104 - Euclid Problem
https://onlinejudge.org/external/101/10104.pdf */