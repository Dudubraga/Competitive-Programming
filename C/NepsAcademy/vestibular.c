#include <stdio.h>
#include <string.h>

int main() {
    int questions, i;
    int points = 0;

    scanf("%d", &questions);

    char answers[questions + 5];
    char student[questions + 5];

    fgets(answers, questions + 5, stdin);
    fgets(answers, questions + 5, stdin);
    
    fgets(student, questions + 5, stdin);

    for(i = 0; i < questions; i++) {
        if(student[i] == answers[i]) {
            points++;
        }
    }
    printf("%d\n", points);

    return 0;
}

// Entrance Exam
// https://neps.academy/exercise/160