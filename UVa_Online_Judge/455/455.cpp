/* Problem statement: https://onlinejudge.org/external/4/455.pdf */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcase; 
    cin >> testcase;
    for(int i = 0; i < testcase; i++){
        string frase;
        cin >> frase;
        int n = frase.size();
        int cont = n;
        for(int k = 1; k <= n; k++){
            if(n % k == 0){
                bool ok = true;
                for(int j = k; j < n; j++){
                    if(frase[j] != frase[j % k]){
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    cont = k;
                    break;
                }
            }
        }
        cout << cont << endl;
        if(i != testcase-1){
            cout << endl;
        }
    }
    return 0;
}