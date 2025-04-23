#include <stdio.h>
 
int main() {
	int n = 1; 
    int i;
    int maior = 0;
    
    for(i = 0; n != 0; i++){
        scanf("%d", &n);
        if(n > maior){
            maior = n;
        }
    }
    printf("%d\n", maior);

    return 0;
}

