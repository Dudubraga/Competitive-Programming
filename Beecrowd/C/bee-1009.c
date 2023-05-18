#include <stdio.h>
 
int main(){
 
    char name[50];
    double salary, sold, bonus;
    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sold);
    bonus = salary + (sold * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", bonus);
 
    return 0;
}

// 1009 - Salary with Bonus
// https://www.beecrowd.com.br/judge/en/problems/view/1009