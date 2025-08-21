/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1397 */
#include <stdio.h>

int main(){
    int rounds, a, b, a_points, b_points;

    while(scanf("%d", &rounds)){
        if(rounds == 0){
            break;
        }
        a_points = 0, b_points = 0;

        for(int i = 0; i < rounds; ++i){
            scanf("%d %d", &a, &b);

            if(a > b){
                ++a_points;
            }
            else if(b > a){
                ++b_points;
            }
        }
        printf("%d %d\n", a_points, b_points);
    }

    return 0;
}

