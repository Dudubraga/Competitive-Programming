/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1175 */
#include <stdio.h>
 
int main(){
    int arr[20];
    for(int i = 0; i < 20; i++){
	    scanf("%d", &arr[i]);      
    }
    for(int j = 0; j < 20; j++){
	    printf("N[%d] = %d\n", j, arr[20-j-1]);
    }
 
    return 0;
}

