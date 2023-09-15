#include <stdio.h>

int main(){
        int N;
        while(scanf("%d", &N) != EOF){
        int M[N];
        char L[N];
        for(int i = 0; i < N; i++){
                scanf("%d %c", &M[i], &L[i]);
        }
        int pairs = 0;
        for(int j = 0; j < N; j++){
                for(int k = 0; k < N; k++){
                        if(k != j && M[k] == M[j]){
                                if(L[k] != L[j]){
                                        pairs++;
                                        M[k] = 0;
                                        M[j] = 0;
                                        L[k] = '0';
                                        L[j] = '0';
                                }
                        }
                }
        }
                printf("%d\n", pairs);
        }

    return 0;
}

/* 1245 - Lost Boots
https://www.beecrowd.com.br/judge/en/problems/view/1245 */
