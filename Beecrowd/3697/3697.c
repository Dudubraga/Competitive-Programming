/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/3697 */
#include <stdio.h>

int main(){
    int N, C;
    scanf("%d %d", &N, &C);
    int P1[N], P2[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &P1[i]);
    }
    for(int j = 0; j < N; j++){
        scanf("%d", &P2[j]);
    }
    int O1[N], O2[N];
    for(int i = 0; i < N; i++){
        if(i <= C-1){
            O1[i] = P1[i];
        }else{
            O1[i] = P2[i];
        }
    }
    for(int j = 0; j < N; j++){
        if(j <= C-1){
            O2[j] = P2[j];
        }else{
            O2[j] = P1[j];
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d", O1[i]);
        if(i != N-1){ printf(" "); }
    } printf("\n");
    for(int j = 0; j < N; j++){
        printf("%d", O2[j]);
        if(j != N-1){ printf(" "); }
    } printf("\n");

    return 0;
}

