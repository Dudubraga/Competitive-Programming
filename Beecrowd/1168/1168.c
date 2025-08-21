/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1168 */
#include <stdio.h>
#include <string.h>

int main(){
    int N, leds[10] = {6,2,5,5,4,5,6,3,7,6};
    scanf("%d\n", &N);
    char num[101];
    for(int i = 0; i < N; i++){
        scanf("%s", &num);
        int size = strlen(num), ans = 0;
        for(int j = 0; j < size; j++){
            ans += leds[num[j] - '0'];
        }
        printf("%d leds\n", ans);
    }

    return 0;
}

