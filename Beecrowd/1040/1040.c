#include <stdio.h>

int main(){
    double grade1, grade2, grade3, grade4, extra, media;
    scanf("%lf %lf %lf %lf", &grade1, &grade2, &grade3, &grade4);

    media = (2 * grade1 + 3 * grade2 + 4 * grade3 + 1 * grade4) / 10.0;
    printf("Media: %.1lf\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");

        scanf("%lf", &extra);
        printf("Nota do exame: %.1lf\n", extra);
        
        media = (media + extra)/2.0;
        
        if(media >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", media);
    }

    return 0;
}

