#include <stdio.h>

int main(){
    int S, T, F;
    scanf("%d %d %d", &S, &T, &F);
    int ans = S + T + F;
    if(ans >= 24){ ans -= 24; }
    if(ans < 0){ ans += 24; }
    printf("%d\n", ans);

    return 0;
}

