/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1022 */
#include <stdio.h>
 
int main(){
    int tests, num1, den1, num2, den2;
    char op;
    int den, num, a, b, gcd, simp_num, simp_den;
    scanf("%d", &tests);

    for(int t = 0; t < tests; t++){
        scanf("%d / %d %c %d / %d", &num1, &den1, &op, &num2, &den2);
        if(op == '+'){
            den = (den1 * den2);
            num = (num1 * den2) + (num2 * den1);
        }
        if(op == '-'){
            den = (den1 * den2);
            num = (num1 * den2) - (num2 * den1);
        }
        if(op == '*'){
            den = (den1 * den2);
            num = (num1 * num2);
        }
        if(op == '/'){
            den = (den1 * num2);
            num = (num1 * den2);
        }
        a = num;
        b = den;
        for(int i = 1; i <= a && i <=b; i++){
            if(a % i == 0 && b % i == 0){
                gcd = i;
            }
        }

        simp_num = num / gcd;
        simp_den = den / gcd;

        printf("%d/%d = %d/%d\n", num, den, simp_num, simp_den);
    }
    
    return 0;
}

