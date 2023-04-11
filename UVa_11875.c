#include <stdio.h>

int main() {
    int t, n, i, j;
    
    scanf("%d", &t);
    for(i = 1; i <= t; i++) {
        scanf("%d", &n);
        int x;
        int meio = (n-1)/2;
        for(j = 0; j < n; j++) {
            scanf("%d", &x);
            if(j == meio) {
                meio = x;
            }
        }
        printf("Case %d: %d\n", i, meio);
    }
    return 0;
}
