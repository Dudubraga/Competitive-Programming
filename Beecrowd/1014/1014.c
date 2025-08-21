/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1014 */
#include <stdio.h>

int main(){
    int x;
    double y, total_spent;
    scanf("%d\n%lf", &x, &y);
    
    total_spent = x/y;

    printf("%.3lf km/l\n", total_spent);

    return 0;
}

