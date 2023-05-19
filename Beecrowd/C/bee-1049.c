#include <stdio.h>

int main(){
    char filo[20];
    char classe[20];
    char ordem[20];
    scanf("%s\n%s\n%s", filo, classe, ordem);

    if(filo[0] == 'v' && classe[0] == 'a' && ordem[0] == 'c'){
            printf("aguia\n");
    }
    if(filo[0] == 'v' && classe[0] == 'a' && ordem[0] == 'o'){
        printf("pomba\n");
    }
    if(filo[0] == 'v' && classe[0] == 'm' && ordem[0] == 'o'){
        printf("homem\n");
    }
    if(filo[0] == 'v' && classe[0] == 'm' && ordem[2] == 'r'){
        printf("vaca\n");
    }
    if(filo[0] == 'i' && classe[0] == 'i' && ordem[2] == 'm'){
        printf("pulga\n");
    }
    if(filo[0] == 'i' && classe[0] == 'i' && ordem[2] == 'r'){
        printf("lagarta\n");
    }
    if(filo[0] == 'i' && classe[0] == 'a' && ordem[2] == 'm'){
        printf("sanguessuga\n");
    }
    if(filo[0] == 'i' && classe[0] == 'a' && ordem[0] == 'o'){
        printf("minhoca\n");
    }

    return 0;
}

// 1049 - Animal
// https://www.beecrowd.com.br/judge/en/problems/view/1049