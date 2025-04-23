#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int q, n; cin >> q;
    while(q--){
        cin >> n;
        if(n == 2){ cout << 2; }
        else if(n % 2 != 0){ cout << 1; }
        else{ cout << 0; }
        cout << endl;
    }

    return 0;
}

