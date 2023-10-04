#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
        int t;
        scanf("%d\n", &t);
        while(t--){
            char str[MAX];
            fgets(str, MAX, stdin);
            str[strlen(str)-1] = '\0';
            int i = 0, space = 1;
            while(i < strlen(str)){
                if(str[i] == ' '){ space = 1; }
                if(str[i] != ' ' && space == 1){
                    printf("%c", str[i]);
                    space = 0;
                } 
                i++;
            } printf("\n");
        }

        return 0;
}

/* 1272 - Hidden Message 
https://www.beecrowd.com.br/judge/en/problems/view/1272 */