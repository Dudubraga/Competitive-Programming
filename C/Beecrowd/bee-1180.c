#include <stdio.h>

int main(){
	int N, num, lowest = 10000, pos;
	scanf("%d", &N);
	int arr[N];
	for(int i = 0; i < N; i++){
		scanf("%d", &num);
		if(num < lowest){
			lowest = num;
			pos = i;
		}
		arr[i] = num;
	}
	printf("Menor valor: %d\nPosicao: %d\n", lowest, pos);

	return 0;
}

// 1180 - Lowest Number and Position
// https://www.beecrowd.com.br/judge/en/problems/view/1180