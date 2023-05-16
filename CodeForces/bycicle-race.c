#include <stdio.h>

int main() {

    int tests, i = 0, sentido, curva, esquerda = 0;
    int x0, x1, x2, y0, y1, y2;
    scanf("%d", &tests);
    tests = tests - 1;
    scanf("%d %d", &x0, &y0);
    scanf("%d %d", &x1, &y1);
    while(i < tests){
        scanf("%d %d", &x2, &y2);
        if(x1 != x0){
            if(x1 > x0){
                sentido = 1;
            } 
            else if(x1 < x0){
                sentido = -1;
            }
            if(y2 != y1){
                if(y2 > y1){
                    curva = 2;
                } if(y2 < y1) {
                    curva = -2;
                }
            }
        }
        if(y1 != y0){
            if(y1 > y0){
                sentido = 2;
            } 
            else if(y1 < y0){
                sentido = -2;
            }
            if(x2 != x1){
                if(x2 > x1){
                    curva = 1;
                } 
                if(x2 < x1){
                    curva = -1;
                }
            }
        }
        if(sentido == 1 && curva == 2){
            esquerda++;
        }
        else if(sentido == -1 && curva == -2){
            esquerda++;
        }
        else if(sentido == 2 && curva == -1){
            esquerda++;
        }
        else if(sentido == -2 && curva == 1){
            esquerda++;
        }
        x0 = x1;
        x1 = x2;
        y0 = y1;
        y1 = y2;
        i++;
    }
    printf("%d", esquerda);

    return 0;
}

// D659 - Bicycle Race
// https://codeforces.com/problemset/problem/659/D