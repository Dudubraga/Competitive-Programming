/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1094 */
#include <stdio.h>

int main(){
    int tests, amount, total = 0;
    char animal, p = '%';
    int rabbit = 0, rat = 0, frog = 0;
    scanf("%d", &tests);
    for(int i = 0; i < tests; i++){
        scanf("%d %c", &amount, &animal);
        total += amount;
        if(animal == 'C'){
            rabbit += amount;
        }else if(animal == 'R'){
            rat += amount;
        }else if(animal == 'S'){
            frog += amount;
        }
    }
    double rabbit_percentage = (rabbit / (total*1.0)) * 100.00;
    double rat_percentage = (rat / (total*1.0)) * 100.00;
    double frog_percentage = (frog / (total*1.0)) * 100.00;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2lf %c\n", rabbit_percentage, p);
    printf("Percentual de ratos: %.2lf %c\n", rat_percentage, p);
    printf("Percentual de sapos: %.2lf %c\n", frog_percentage, p);
    
    return 0;
}

