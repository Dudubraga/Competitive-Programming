/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1183 */
#include <stdio.h>

int main(){
        char Op;
        float M[12][12];
        float sum = 0, num = 0;
        scanf("%c", &Op);
        for(int i = 0; i < 12; i++){
                for(int j = 0; j < 12; j++){
                        scanf("%f", & M[i][j]);
                        if(i < j){
                                sum += M[i][j];
                                num+=1;
                        }
                }
        }
        float avg = sum / num;
        if(Op == 'S'){ printf("%.1f\n", sum); }
        else{ printf("%.1f\n", avg); }

        return 0;
}

