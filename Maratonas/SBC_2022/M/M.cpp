#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    int A[n], Aend[n] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    int c, d;
    for(int i = 0; i < q; i++){
        scanf("%d %d", &c, &d);
        if(c > 1){
            for(int j = 2; j <= n; j++){
                if(__gcd(j, c) > 1){
                    if(A[j-1] - d <= 0 && Aend[j-1] == 0){
                        Aend[j-1] = i+1;
                    }
                    A[j-1] -= d;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(Aend[i] == 0){ Aend[i]--; }
        printf("%d\n", Aend[i]);
    }

    return 0;
}