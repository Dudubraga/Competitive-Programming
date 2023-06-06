#include <stdio.h>

int main(){
	
	int tests, n, divisors;
	int i = 0;
	scanf("%d", &tests);
	while(i < tests){
		scanf("%d", &n);
		divisors = 0;
		int j = 1;
		while(j <= n){
			if(n % j == 0){
				divisors+=1;
			}
			j++;
		}
		if(divisors == 2){
			printf("%d eh primo\n", n);
		} else {
			printf("%d nao eh primo\n", n);
		}
		i++;
	}

	return 0;
}

// 1165 - Prime Number
// https://www.beecrowd.com.br/judge/en/problems/view/1165