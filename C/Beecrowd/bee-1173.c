#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, N);
        N *= 2;
    }

    return 0;
}

// 1173 - Array fill I
// https://www.beecrowd.com.br/judge/en/problems/view/1173