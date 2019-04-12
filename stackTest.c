//
// Created by liaozhenhua on 2019-04-11.
//
#include <stdio.h>
#include "Stack.h"

int main(){
    pSTACK stack = CreatStack();
    printf("栈为空：%d\n", IsEmptyStack(stack));
    PushStack(stack, 10);
    PushStack(stack, 20);
    printf("栈为空：%d\n", IsEmptyStack(stack));
    printf("出栈：%d\n", PopStack(stack));
    printf("出栈：%d\n", PopStack(stack));
    printf("出栈：%d\n", PopStack(stack));
    printf("栈为空：%d\n", IsEmptyStack(stack));
}