/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1172 */
#include <stdio.h>

int main(){
	int x;
	int arr[10];
	for(int i = 0; i < 10; i++){
		scanf("%d", &x);
		if(x <= 0){ x = 1; }
		arr[i] = x;
		printf("X[%d] = %d\n", i, arr[i]);
	}

	return 0;
}

