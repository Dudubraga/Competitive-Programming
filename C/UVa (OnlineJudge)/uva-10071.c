#include <stdio.h>

int v, t;

int main() {
    while(scanf("%d %d", &v, &t) == 2) {
        printf("%d\n", (v*2*t));
    }

    return 0;
}

// 10071 - Back to High School Physics
// https://onlinejudge.org/external/100/10071.pdf