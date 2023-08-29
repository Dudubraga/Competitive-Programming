#include <iostream>
#include <cmath>
using namespace std;

int main(){	
	int tests, n, divisors;
	scanf("%d", &tests);
	for(int i = 0; i < tests; i++){
		scanf("%d", &n);
		divisors = 0;
		for(int j = 2; j <= sqrt(n); j++){
			if(n % j == 0){
				divisors++;
			}
		}
		if(divisors > 0){
			printf("%d nao eh primo\n", n);
		} else {
			printf("%d eh primo\n", n);
		}
	}

	return 0;
}

/* 1165 - Prime Number
https://www.beecrowd.com.br/judge/en/problems/view/1165 */
