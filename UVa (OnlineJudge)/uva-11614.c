#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    int i;
    for(i = 0; i < t; i++) {
        double n;
        scanf("%lf", &n);
        int result = (-1 + sqrt(1 + (8 * n))) / 2;
        
        printf("%d\n", result);
   }
    return 0;
}

// 11614 - Etruscan Warriors Never Play Chess
// https://onlinejudge.org/external/116/11614.pdf