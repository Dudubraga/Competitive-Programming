#include <stdio.h>

int main(){
    int N, C, v, elected = 1;
    scanf("%d\n%d", &N, &C);
    for(int i = 1; i < N; i++){
        scanf("%d", &v);
        if(v > C){ elected = 0; }
    }
    if(elected == 1){ printf("S\n"); }
    else{ printf("N\n"); }

    return 0;
}

