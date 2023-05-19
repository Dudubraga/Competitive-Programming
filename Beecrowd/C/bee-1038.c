#include <stdio.h>

int main(){
    double total;
    int code, quant;
    scanf("%d %d", &code, &quant);

    if(code == 1){
        total = quant * 4.00;
    }
    else if(code == 2){
        total = quant * 4.50;
    }
    else if(code == 3){
        total = quant * 5.00;
    }
    else if(code == 4){
        total = quant * 2.00;
    }
    else if(code == 5){
        total = quant * 1.50;
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}

// 1038 - Snacks
// https://www.beecrowd.com.br/judge/en/problems/view/1038