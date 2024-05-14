#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool Parenthesis(char * expression){
    Stack * stack = Stack_Create();
    for(int i = 0; i < strlen(expression); i++){
        char current = *(expression + i);
        if(current == '(' || current == ')'){
            if(current == '('){
                Stack_Push(stack, current);
            }else{
                if(!Stack_IsEmpty(stack)){
                    Stack_Pop(stack);
                }else{
                    return false;
                }
            }
        }
    }
    return Stack_IsEmpty(stack);
}

int main(){
    char exp[10000];
    while(fgets(exp, 10000, stdin)){
        if(Parenthesis(exp)){
            printf("correct\n");
        }else{ 
            printf("incorrect\n");
        }
    }

    return 0;
}

// 1068 - Parenthesis Balance I
// https://judge.beecrowd.com/en/problems/view/1068
