#include <stdio.h>

int main(){
    char game[3];
    int O = 0;
    for(int i = 0; i < 3; i++){
        scanf("%c", &game[i]);
        if(game[i] == 'O'){ O++; }
    }
    if(O != 1){ printf("?\n"); }
    else if(game[1] == 'O'){
        printf("*\n");
    }
    else{ printf("Alice\n"); }

    return 0;
}

/* 3454 - Alice in Noughts and Crosses Wonderland
https://www.beecrowd.com.br/judge/en/problems/view/3454 */

