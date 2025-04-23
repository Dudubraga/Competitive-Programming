#include <stdio.h>

int main(){
    char str[100];
	fgets(str, 100, stdin);
	if(str[0] == 'O' || str[0] == 'o' || str[0] == 'C' || str[0] == 'c'){
		printf("mas\n");
	}else{
		printf("mais\n");
	}

	return 0;
}

