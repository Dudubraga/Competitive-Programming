#include <stdio.h>

int main(){

    int x, z;
    scanf("%d", &x);
    while(1){
        scanf("%d", &z);
        if(z > x){
            break;
        }
    }
    int sum = 0, count = 0;
    for(int i = x; sum <= z; i++){
        sum += i;
        count++;
    }
    printf("%d\n", count);

    return 0;
}

