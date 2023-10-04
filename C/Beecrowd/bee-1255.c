#include <stdio.h>
#include <string.h>
#define MAX 500

int main(){
        int t;
        scanf("%d\n", &t);
        while(t--){
            char str[MAX];
            fgets(str, MAX, stdin);
            str[strlen(str)-1] = '\0';
            int count[26]; memset(count, 0, sizeof(count));
            for(int i = 0; i < strlen(str); i++){
                char c = str[i];
                if(c <= 90 && c >= 65){ c += 32; }
                if(c <= 122 && c >= 97){
                    int pos = c - 97;
                    count[pos] += 1;
                }
            }
            int max = 0;
            for(int i = 0; i < 26; i++){
                if(count[i] > max){ max = count[i]; }
            }
            for(int i = 0; i < 26; i++){
                if(count[i] == max){
                    char c = i + 97;
                    printf("%c", c);
                }
                count[i] = 0;
            } printf("\n");
        }

        return 0;
}

/* 1255 - Letter Frequency
https://www.beecrowd.com.br/judge/en/problems/view/1255 */