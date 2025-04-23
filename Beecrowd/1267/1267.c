#include <stdio.h>

int main(){
    int N, D;
    while(scanf("%d %d", &N, &D)){
        if(N == 0 && D == 0) break;
        int attendees[D][N];
        for(int i = 0; i < D; i++){
            for(int j = 0; j < N; j++){
                scanf("%d", &attendees[i][j]);
            }
        }
        int heigher = 0;
        for(int i = 0; i < N; i++){
            int sum = 0;
            for(int j = 0; j < D; j++){
                sum += attendees[j][i];
            }
            if(sum > heigher){
                heigher = sum;
            }
        }
        if(heigher == D) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}

