#include <stdio.h>

int main(){
    int code1, quant1, code2, quant2;
    double price1, price2, paid;

    scanf("%d %d %lf", &code1, &quant1, &price1);
    scanf("%d %d %lf", &code2, &quant2, &price2);

    paid = quant1 * price1 + quant2 * price2;

    printf("VALOR A PAGAR: R$ %.2lf\n", paid);

    return 0;
}

