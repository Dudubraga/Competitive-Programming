#include <stdio.h>
 
int main(){
	  int limak, bob, i;
    int anos = 0;
    scanf("%d %d", &limak, &bob);
    for(i = 0; limak <= bob; i++){
        limak *= 3;
        bob *= 2;
        anos++;
    }
    printf("%d", anos);
    
    return 0;
}
