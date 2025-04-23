#include <stdio.h>

int main(){
    int x, y, i, j;
    scanf("%d %d", &x, &y);
    int columns = x;
    int lines = (y / x) - 1;
    for(i = 0; i <= lines; i++){
        for(j = 1; j <= x; j++){
            if(j == x){
                printf("%d\n", j);
            } else {
                printf("%d ", j);
            }
        }
        x = x + columns;
    }

    return 0;
}

