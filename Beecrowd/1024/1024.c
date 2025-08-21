/* Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1024 */
#include <stdio.h>
#include <string.h>
#define MAX 1000

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char str[MAX];
        fgets(str, MAX, stdin);
        str[strlen(str)-1] = '\0';
        for(int i = 0; i < strlen(str); i++){
            if(str[i] >= 65 && str[i] <= 90){
                str[i] += 3;
            }
            if(str[i] >= 97 && str[i] <= 122){
                str[i] += 3;
            }
        }
        int size = strlen(str);
        char reversed[size];
        int j = size-1;
        for(int i = 0; i <= size; i++){
            reversed[i] = str[j];
            j--;
        }
        for(int i = size/2; i < size; i++){
            reversed[i] -= 1;
        }
        printf("%s\n", reversed);
    }

    return 0;
}

