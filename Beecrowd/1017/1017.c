#include <stdio.h>

int main(){
    int time, speed, distance;
    double liters;
    scanf("%d\n%d", &time, &speed);

    distance = speed * time;
    liters = distance/12.0;

    printf("%.3lf\n", liters);

    return 0;
}

