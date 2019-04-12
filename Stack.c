//
// Created by liaozhenhua on 2019-04-11.
//

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

//栈初始化
pSTACK CreatStack() {
    pSTACK pHead = malloc(sizeof(pSTACK));
    if (pHead == NULL) {
        printf("没有足够空间\n");
        exit(EXIT_FAILURE);
    }

    pHead->data = 0;
    pHead->pNext = NULL;
    return pHead;
}

//入栈
void PushStack(pSTACK stack, int data) {
    pSTACK tail = stack->pNext;

    pSTACK node = malloc(sizeof(pSTACK));
    if (node == NULL) {
        printf("没有足够空间\n");
        exit(EXIT_FAILURE);
    }
    node->data = data;
    stack->pNext = node;
    node->pNext = tail;
}

//出栈
int PopStack(pSTACK stack) {
    if (IsEmptyStack(stack)) {
        printf("出错了，栈为空\n");
        return -1;
    }

    pSTACK tail = stack->pNext->pNext;
    int data = stack->pNext->data;
    stack->pNext = tail;
    return data;
}

//判断栈是否为空
int IsEmptyStack(pSTACK stack) {
    return stack->pNext == NULL;
}

//释放内存
void FreeMemory(pSTACK stack) {
    pSTACK p;
    while (stack->pNext != NULL) {
        p = stack->pNext;
        free(stack);
        stack = p;
    }
}