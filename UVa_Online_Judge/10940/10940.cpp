/* Problem statement: https://onlinejudge.org/external/109/10940.pdf */
#include <iostream>
using namespace std;


int game(int x){
    if(x == 1) return 1;
    else if(x % 2 == 0) return (2 * game(x/2)-1);
    else return (2 * game(x/2) + 1);
}

int main(){
    int n, quant;

    while(cin >> n){
        if(n == 0) break;

        if(n == 1){
            cout << 1 << endl;
        }else{
            quant = game(n);

            if(quant == 1) cout << n << endl;

            else cout << quant - 1 << endl;
        }
    }
    return 0;
}

