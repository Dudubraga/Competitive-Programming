#include <stdio.h>

int main(){
    float arr[100];
    for(int i = 0; i < 100; i++){
        scanf("%f", &arr[i]);
    }
    for(int j = 0; j < 100; j++){
        if(arr[j] <= 10.0){
            printf("A[%d] = %0.1f\n", j, arr[j]);
        }
    }

    return 0;
}

