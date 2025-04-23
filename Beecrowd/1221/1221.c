#include <stdio.h>
#include <math.h>

int main(){
        int T, prime;
        long long int N;
        scanf("%d", &T);
        for(int i = 0; i < T; i++){
                prime = 1;
                scanf("%lld", &N);
                for(int j = 2; j <= sqrt(N); j++){
                        if(N % j == 0){
                                prime = 0;
                        }
                }
                if(prime == 1){ printf("Prime\n"); }
                else{ printf("Not Prime\n"); }
        }

        return 0;
}

