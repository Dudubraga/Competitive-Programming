#include <stdio.h>
 
int main(){
	int n, luz, i;
	int a = 0;
    	int b = 0;
    	scanf("%d", &n);
    	for(i = 0; i < n; i++){
        	scanf("%d", &luz);
        	if(luz == 1){
            		a++;
        	}
        	if(luz == 2){
            		a++;
            		b++;
        	}
    	}
    	if(a % 2 == 0){
        	a = 0;
    	} 
	else {
        	a = 1;
    	}
    	if(b % 2 == 0){
        	b = 0;
    	} 
	else {
        	b = 1;
    	}
    	printf("%d\n", a);
    	printf("%d\n", b);

    return 0;
}

// Lamps
// https://neps.academy/exercise/52