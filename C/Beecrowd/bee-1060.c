#include <stdio.h>

int main(){
    float x;
    int i, positives = 0;
    for(i = 0; i < 6; i++){
        scanf("%f", &x);
        if(x > 0){
            positives++;
        }
    }
    printf("%d valores positivos\n", positives);

    return 0;
}

// 1060 - Positive Numbers
// https://www.beecrowd.com.br/judge/en/problems/view/1060