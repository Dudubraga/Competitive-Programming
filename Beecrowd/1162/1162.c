#include <stdio.h>

int main(){
    int T, L;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d", &L);
        int train[L];
        for(int j = 0; j < L; j++){
            scanf("%d", &train[j]);
        }
        int swaps = 0, aux;
        for(int a = 1; a < L; a++){
            int b = a;
            while(train[b-1] > train[b] && b > 0){
                aux = train[b-1];
                train[b-1] = train[b];
                train[b] = aux;
                swaps++;
                b--;
            } 
        }
        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}

