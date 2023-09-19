#include <stdio.h>

int main(){
    int A, B;
    while(scanf("%d %d", &A, &B)){
        if(A == 0 && B == 0){ break; }
        int cardsA[100000] = {0}, cardsB[100000] = {0};
        int cA, cB, prev = 0;
        for(int i = 0; i < A; i++){
            scanf("%d", &cA);
            if(cA != prev){ cardsA[cA] += 1; }
            prev = cA;
        }
        prev = 0;
        for(int j = 0; j < B; j++){
            scanf("%d", &cB);
            if(cB != prev){ cardsB[cB] += 1; }
            prev = cB;
        }
        int difA = 0, difB = 0;
        for(int i = 0; i < 100000; i++){
            cA = cardsA[i]; cB = cardsB[i];
            if(cardsA[i] > 0 && cardsB[i] == 0){
                difA++;
            }
            if(cardsA[i] == 0 && cardsB[i] > 0){
                difB++;
            }
        }
        if(difA < difB){ printf("%d\n", difA); }
        else{ printf("%d\n", difB); }
       
    }
   
    return 0;
}

/* 1104 - Exchanging Cards
https://www.beecrowd.com.br/judge/en/problems/view/1104 */