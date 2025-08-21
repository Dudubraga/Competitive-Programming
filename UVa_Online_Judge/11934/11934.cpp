/* Problem statement: https://onlinejudge.org/external/119/11934.pdf */
#include <iostream>
#include <cmath>
using namespace std;

int a, b, c, d, l;
int cont;

void bask(){
    int bh;
    for(int i = 0; i <= l; i++){
        bh = (a * pow(i,2) + b * i + c);
        if(bh % d == 0) cont++;
    }
}

int main(){
    while(true){
        cin >> a >> b >> c >> d >> l;
        if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0)break;
        bask();
        cout << cont << endl;
        cont = 0;
    }
    return 0;
}

