#include <stdio.h>
#include <limits.h>

int main() {
    int participantes, orcamento, hoteis, semanas;
    int preco, camas, i, j;
    int menor_preco = INT_MAX;
    int custo;

    scanf("%d %d %d %d", &participantes, &orcamento, &hoteis, &semanas);
    for(i = 0; i < hoteis; i++) { 
        scanf("%d", &preco); 
        for(j = 0; j < semanas; j++) { 
            scanf("%d", &camas); 
            if(camas >= participantes) {  
                custo = participantes * preco;
                if(custo <= orcamento && custo < menor_preco) {
                    menor_preco = custo;
                }
            }
        }
    }
    
    if(menor_preco == INT_MAX) {
        printf("stay home\n");
    }
    else {
        printf("%d\n", menor_preco);
    }
    return 0;
}

// Event Planning
// https://open.kattis.com/problems/eventplanning