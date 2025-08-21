/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1066 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0, d = 0;
    int n;
    for(int i = 0; i < 5; i++){
        cin >> n;
        if(n % 2 == 0){ 
            a++; 
        }
        if(n % 2 != 0){ 
            b++; 
        }
        if(n > 0){
            c++;
        }
        if(n < 0){
            d++;
        }
    }
    cout << a << " valor(es) par(es)" << endl;
    cout << b << " valor(es) impar(es)" << endl;
    cout << c << " valor(es) positivo(s)" << endl;
    cout << d << " valor(es) negativo(s)" << endl;
 
    return 0;
}

