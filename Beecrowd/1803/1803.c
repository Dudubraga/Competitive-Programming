/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1803 */
#include <stdio.h>
#include <string.h>
#define MAX 90

int main(){
    int M = 0, F = 0, L = 0;
    char matring[4][MAX];
    for(int i = 0; i < 4; i++){
        fgets(matring[i], MAX, stdin);
        matring[i][strlen(matring[i])-1] = '\0';
    }
    int size = strlen(matring[0]); 
    int x = 1000;
    for(int i = 0; i < 4; i++){
        F += (matring[i][0] - '0') * x;
        x /= 10;
    }
    x = 1000;
    for(int i = 0; i < 4; i++){
        L += (matring[i][size-1] - '0') * x;
        x /= 10;
    }
    for(int i = 1; i < size-1; i++){
        x = 1000;
        M = 0;
        for(int j = 0; j < 4; j++){
            M += (matring[j][i] - '0') * x;
            x /= 10;
        }
        char c = (F * M + L) % 257;
        printf("%c", c);
    } printf("\n");

    return 0;
}

