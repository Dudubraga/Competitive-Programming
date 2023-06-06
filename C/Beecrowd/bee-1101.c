#include <stdio.h>

int main() {
    int m, n, smallest, biggest;
    while(1){
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0){
            break;
        }
        if(m >= n){
            biggest = m;
            smallest = n;
        } 
        else if(m <= n){
            biggest = n;
            smallest = m;
        }
        int total = 0;
        for(int i = smallest; i <= biggest; i++){
            total += i;
        }
        for(int i = smallest; i <= biggest; i++){
            printf("%d ", i);
        }
        printf("Sum=%d\n", total);
    }

    return 0;
}

// 1101 - Sequence of Numbers and Sum
// https://www.beecrowd.com.br/judge/en/problems/view/1101