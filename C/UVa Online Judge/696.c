#include <stdio.h>

int HowManyKnights(int linhas, int colunas){
    int n, tabuleiro, cavalos;
    tabuleiro = colunas * linhas;
    /* CASO 1 */
    if(linhas == 1 || colunas == 1){
        cavalos = colunas * linhas;
    }
    /* CASO 2 */
    else if(linhas == 2 || colunas == 2){
        if(linhas > 2){ n = linhas; }
        else{ n = colunas; }
        cavalos = 4;
        for(int i = 2; i < n; i++){
            if(i % 4 == 0 || (i-1) % 4 == 0){
                cavalos += 2;
            }
        }
    }
    /* CASO 3 */
    else{
        if(tabuleiro % 2 == 0){
            cavalos = tabuleiro / 2;
        }else{
            cavalos = (tabuleiro + 1) / 2;
        }
    }
    return cavalos;
}

int main(){
    int linhas, colunas, cavalos;
    while(1){
        scanf("%d %d", &linhas, &colunas);
        if(colunas == 0 && linhas == 0){ break; }

        cavalos = HowManyKnights(linhas, colunas);

        printf("%d knights may be placed on a %d row %d column board.\n", cavalos, linhas, colunas);
    }

    return 0;
}

/* 696 - How Many Knights
https://onlinejudge.org/external/6/696.pdf */

