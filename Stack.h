//
// Created by liaozhenhua on 2019-04-11.
//

#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H


typedef struct Node {
    int data;
    struct Node *pNext;
} NODE, *pSTACK;


//栈初始化
pSTACK CreatStack();

//入栈
void PushStack(pSTACK stack, int data);

//出栈
int PopStack(pSTACK stack);

//判断栈是否为空
int IsEmptyStack(pSTACK stack);

//释放内存
void FreeMemory(pSTACK stack);


#endif //UNTITLED_STACK_H
