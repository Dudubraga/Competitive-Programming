#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int cont = 0, b1 = 0, b2 = 0;
    for(int i = 0; i < n; i++){
        cin >> b2;
        if(b2 >= b1){
            cont++;
        }
        b1 = b2;
    }
    cout << cont << endl;

    return 0;
}