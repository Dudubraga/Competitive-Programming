#include <stdio.h>

int main(){
    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};
    int reais, cents;

    scanf("%d.%d", &reais, &cents);
    reais = 100 * reais + cents;

    printf("NOTAS:\n");
    for(int i = 0; i < 6; ++i){
        printf("%d nota(s) de R$ %.2lf\n", reais/notes[i], notes[i]/100.0);
        reais %= notes[i];
    }

    printf("MOEDAS:\n");
    for(int i = 0; i < 6; ++i){
        printf("%d moeda(s) de R$ %.2lf\n", reais/coins[i], coins[i]/100.0);
        reais %= coins[i];
    }

    return 0;
}

