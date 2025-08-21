/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1044 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, multiple, big, small;
    scanf("%d %d", &a, &b);

    big = (a + b + abs(a - b)) / 2;
    small = (a + b - abs(a - b)) / 2;
    multiple = big % small;

    if(multiple == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}

