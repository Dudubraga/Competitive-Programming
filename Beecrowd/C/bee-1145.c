#include <stdio.h>

int main(){
    int x, y, i, j = 1;
    scanf("%d %d", &x, &y);
    int columns = x;
    int lines = (y / x) - 1;
    for(i = 0; i <= lines; i++){
        for(j; j <= x; j++){
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

// 1145 - Logical Sequence 2
// https://www.beecrowd.com.br/judge/en/problems/view/1145