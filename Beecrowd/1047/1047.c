/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1047 */
#include <stdio.h>

int main() {
    int start_hour, start_minute, end_hour, end_minute;
    int start, finish, time, hour, minute;

    scanf("%d %d %d %d", &start_hour, &start_minute, &end_hour, &end_minute);

    start = (start_hour * 60) + start_minute;
    finish = (end_hour * 60) + end_minute;
    time = finish - start;

    if(time > 0){
        hour = time / 60;
        minute = time % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }
    else if(time <= 0){
        time = 24 * 60 + time;
        hour = time / 60;
        minute = time % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }

    return 0;
}

