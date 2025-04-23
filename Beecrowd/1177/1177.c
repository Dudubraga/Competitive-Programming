#include <stdio.h>
 
int main(){
	int T, num = 0;
	int arr[1000];
	scanf("%d", &T);
	for(int i = 0; i < 1000; i++){
		if(num == T){ num = 0; }
		arr[i] = num;
		num++;
	}
	for(int j = 0; j < 1000; j++){
		printf("N[%d] = %d\n", j, arr[j]);
	}

	return 0;
}

