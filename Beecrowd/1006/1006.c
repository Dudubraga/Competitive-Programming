#include <stdio.h>
 
int main(){
    float a, b, c, average;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    average = ((a * 2) + (b * 3) + (c * 5)) / 10;
    printf("MEDIA = %.1f\n", average);
 
    return 0;
}