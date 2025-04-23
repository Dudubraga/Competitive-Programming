#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct stack{
    int top;
    char * values;
} Stack;

Stack * Stack_Create(){
    Stack * stack = (Stack *) malloc(sizeof(Stack));
    stack->values = (char *) malloc(10000 * sizeof(char));
    stack->top = 0;
    return stack;
}

void Stack_Destroy(Stack * s){
    free(s->values);
    free(s);
}

bool Stack_IsEmpty(Stack * s){
    return s->top == 0;
}

void Stack_Push(Stack * s, char value){
    *(s->values + s->top) = value;
    s->top++;
}

char Stack_Pop(Stack * s){
    char value = *(s->values + s->top-1);
    s->top--;
    return value;
}

int process(char * expression){
    Stack * stack = Stack_Create();
    int diamonds = 0;
    for(int i = 0; i < strlen(expression); i++){
        char current = *(expression + i);
        if(current != '.'){
            if(current == '<'){
                Stack_Push(stack, current);
            }else{
                if(!Stack_IsEmpty(stack)){
                    Stack_Pop(stack);
                    diamonds++;
                }
            }
        }
    }
    Stack_Destroy(stack);
    return diamonds;
}

int main(){
    int t; scanf("%d\n", &t);
    while(t--){
        char expression[1005];
        fgets(expression, 1005, stdin);
        expression[strlen(expression)-1] = '\0';
        printf("%d\n", process(expression));
    }

    return 0;
}

