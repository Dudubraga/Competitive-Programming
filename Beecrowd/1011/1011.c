#include <stdio.h>

int main(){
    int r;
    double volume;
    double PI = 3.14159;

    scanf("%d", &r);

    volume = 4.0/3.0 * PI * r * r * r;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}

