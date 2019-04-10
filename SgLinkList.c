//
// Created by liaozhenhua on 2019-04-10.
//
#include <stdio.h>
#include <stdlib.h>
#include "SgLinkList.h"

//创建单向链表，只有header
pNODE CreateSgLinkList(void) {
    pNODE pHead = (pNODE) malloc(sizeof(NODE));
    if (pHead == NULL) {
        printf("内存分配失败！\n");
        exit(EXIT_FAILURE);
    }
    pHead->data = 0;
    pHead->pNext = NULL;
    return pHead;
}

//打印单向链表
void TraverseSgLinkList(pNODE pHead) {
    pNODE p = pHead->pNext;

    printf("链表元素：");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->pNext;
    }
    putchar('\n');
}

//判断单向链表是否为空
boolean IsEmptySgLinkList(pNODE pHead) {
    return pHead->pNext == NULL;
}

//计算单向链表的长度
int GetLengthSgLinkList(pNODE pHead) {
    int len = 0;
    while (pHead->pNext != NULL) {
        ++len;
        pHead = pHead->pNext;
    }
    return len;
}

//向单向链表插入节点，pos从1开始
int InsertEleSgLinkList(pNODE pHead, int pos, int data) {
    pNODE pTail;

    if (pos < 1 || pos > GetLengthSgLinkList(pHead) + 1) {
        printf("插入位置无效\n");
        return 0;
    }

    while (--pos >= 1 && pHead->pNext != NULL) {
        pHead = pHead->pNext;
    }
    pTail = pHead->pNext;
    pHead->pNext = (pNODE) malloc(sizeof(NODE));
    pHead = pHead->pNext;
    if (pHead == NULL) {
        printf("内存分配失败！\n");
        exit(EXIT_FAILURE);
    }
    pHead->data = data;
    pHead->pNext = pTail;
    return 1;
}

//从单向链表删除节点
int DeleteEleSgLinkList(pNODE pHead, int pos) {
    pNODE pTail;

    if (pos < 1 || pos > GetLengthSgLinkList(pHead)) {
        printf("删除位置无效\n");
        return 0;
    }

    while (--pos >= 1) {
        pHead = pHead->pNext;
    }
    pTail = pHead->pNext->pNext;
    pHead->pNext = pTail;
    return 1;
}

//删除整个链表，释放内存
void FreeMemory(pNODE *ppHead){
    pNODE p;
    while (*ppHead != NULL){
        p = (*ppHead)->pNext;
        free(*ppHead);
        *ppHead = p;
    }
}