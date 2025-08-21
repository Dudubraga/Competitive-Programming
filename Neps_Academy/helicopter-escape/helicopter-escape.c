/* Problem statement: https://neps.academy/br/exercise/5 */
#include <stdio.h>
 
int main(){
	  int h, p, f, d;
    scanf("%d %d %d %d", &h, &p, &f, &d);
    while(f != p && f != h){
        if(d == -1){
            while(f != h && f != p){
                f--;
                if(f == -1){
                    f = 15;
                }
            }
            if(f == h){
                printf("S");
            }
        }
        if(d == 1){
            while(f != h && f != p){
                f++;
                if(f == 16){
                    f = 0;
                }
            }
            if(f == h){
                printf("S");
            }
        }
    }
    if(f == p){
        printf("N");
    }
    return 0;
}

