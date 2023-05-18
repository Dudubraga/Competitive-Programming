#include <stdio.h>
 
int main(){
 
    float a, b, average;
    scanf("%f", &a);
    scanf("%f", &b);
    average = ((a * 3.5) + (b * 7.5)) / 11;
    
    printf("MEDIA = %.5f\n", average);
 
    return 0;
}

// 1005 - Average 1
// https://www.beecrowd.com.br/judge/en/problems/view/1005