#include <stdio.h>

int main(){
    int start, finish, duration;
    scanf("%d %d", &start, &finish);

    if(start == finish) {duration = 24;}
    else if(start < finish) {duration = finish - start;}
    else if(start > finish) {duration = 24 - (start - finish);}

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}

