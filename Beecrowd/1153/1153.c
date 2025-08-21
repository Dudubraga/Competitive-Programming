/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1153 */
#include <stdio.h>

int main(){
    int n, i = 1;
    scanf("%d", &n);
    while(n > 0){
        i = i * n;
        n -= 1;
    }
    printf("%d\n", i);

    return 0;
}

