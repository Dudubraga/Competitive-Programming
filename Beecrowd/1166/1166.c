#include <stdio.h>

int main(){
    int T, N;
    scanf("%d", &T);
    while(T--){
        scanf("%d", &N);
        int ans = (((N+1) * (N+1)) / 2) - 1;
        printf("%d\n", ans);
    }

