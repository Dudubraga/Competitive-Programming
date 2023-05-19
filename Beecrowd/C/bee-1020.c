#include <stdio.h>

int main(){
    int days, years, months;
    scanf("%d", &days);

    years = days/365;
    days %= 365;
    months = days/30;
    days %= 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}

// 1020 - Age in Days
// https://www.beecrowd.com.br/judge/en/problems/view/1020