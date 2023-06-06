#include <stdio.h>

int main(){

    unsigned int a, b;
    while(scanf("%u %u", &a, &b) != EOF){    
        printf("%u\n", a ^ b);
    }
    return 0;
}

// 1026 - To Carry or not to Carry
// https://www.beecrowd.com.br/judge/en/problems/view/1026