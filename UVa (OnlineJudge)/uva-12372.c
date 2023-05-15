#include <stdio.h>

int main() {
    int t, i;
    scanf("%d", &t);
    for(i = 1; i <= t; i++) {
        int l, w, h;
        scanf("%d %d %d", &l, &w, &h);
        if(l <= 20 && w <= 20 && h <= 20) {
            printf("Case %d: good\n", i);
        }
        else {
            printf("Case %d: bad\n", i);
        }
    }
    return 0;
}

// 12372 - Packing for Holiday
// https://onlinejudge.org/external/123/12372.pdf