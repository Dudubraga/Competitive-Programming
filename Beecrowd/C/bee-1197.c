#include <stdio.h>

int v, t;

int main() {
    while(scanf("%d %d", &v, &t) == 2) {
        printf("%d\n", (v*2*t));
    }

    return 0;
}

// 1197 - Back to High School Physics
// https://www.beecrowd.com.br/judge/en/problems/view/1197