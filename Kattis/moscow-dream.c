#include <stdio.h>

int a, b, c, n;

int main() {
    scanf("%d %d %d %d", &a, &b, &c, &n);
    if(a > 0 && b > 0 && c > 0 && n >= 3) {
        if(a+b+c >= n) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }    
    }
    else {
        printf("NO\n");
    }

    return 0;
}

// Moscow Dream
// https://open.kattis.com/problems/moscowdream