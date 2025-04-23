#include <stdio.h>

int main(){
	
	int tests, n, divisors;
	int i = 0;
	scanf("%d", &tests);
	while(i < tests){
		scanf("%d", &n);
		divisors = 0;
		int j = 1;
		while(j < n){
			if(n % j == 0){
				divisors = divisors + j;
			}
			j++;
		}
		if(divisors == n){
			printf("%d eh perfeito\n", n);
		} else {
			printf("%d nao eh perfeito\n", n);
		}
		i++;
	}

	return 0;
}

