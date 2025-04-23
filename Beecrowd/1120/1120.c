#include <stdio.h>
#include <string.h>
#define MAX 120

int main(){
    int n;
    char num[MAX], contract[MAX];
    while(1){
        scanf("%d ", &n);
        fgets(num, MAX, stdin);
        if(n == 0 && num[0] == '0'){ break; }
        int j = 0;
        for(int i = 0; i < strlen(num)-1; i++){
            if(num[i] - '0' != n && num[i] != '\n'){
                contract[j] = num[i];
                j++;
            }
        }
        contract[j] = '\0';
        int zeros = 0, pos = 0;
        if(contract[0] == '0'){
            while(contract[pos] == '0' && pos+1 < strlen(contract)){
                pos++;
            }
            zeros = 1;
        }
        if(strlen(contract) == 0){
            printf("0\n");
        }
        else if(zeros == 1){
            for(int i = pos; i < strlen(contract); i++){
                printf("%c", contract[i]);
            } printf("\n");
        }
        else{ printf("%s\n", contract); }
    }

    return 0;
}

