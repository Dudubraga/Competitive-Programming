/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/2867 */
#include <stdio.h>
#include <math.h>

int main(){
    int C, N, M;
    scanf("%d", &C);
    for(int i = 0; i < C; i++){
        scanf("%d %d", &N, &M);
        double digits = floor(log10(pow(N, M))) + 1;
        printf("%.f\n", digits);
    }

    return 0;
}

