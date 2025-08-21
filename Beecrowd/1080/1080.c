/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1080 */
#include <stdio.h>

int main(){
    int n, highest = 0, position = 0;
    for(int i = 0; i < 100; i++){
        scanf("%d", &n);
        if(n > highest){
            highest = n;
            position = i;
        }
    }
    printf("%d\n%d\n", highest, position+1);

    return 0;
}

