#include <stdio.h>
 
int main(){
    int number, hours;
    float recieved, salary;
    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%f", &recieved);
    salary = recieved * hours;
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
 
    return 0;
}

