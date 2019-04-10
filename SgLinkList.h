//
// Created by liaozhenhua on 2019-04-10.
//

#ifndef UNTITLED_SGLINKLIST_H
#define UNTITLED_SGLINKLIST_H


#include <jmorecfg.h>

//设计节点结构
typedef struct Node {
    int data;
    struct Node *pNext;
} NODE, *pNODE;

//创建单向链表
pNODE CreateSgLinkList(void);

//打印单向链表
void TraverseSgLinkList(pNODE pHead);

//判断单向链表是否为空
boolean IsEmptySgLinkList(pNODE pHead);

//计算单向链表的长度
int GetLengthSgLinkList(pNODE pHead);

//向单向链表插入节点
int InsertEleSgLinkList(pNODE pHead, int pos, int data);

//从单向链表删除节点
int DeleteEleSgLinkList(pNODE pHead, int pos);

//删除整个链表，释放内存
void FreeMemory(pNODE *ppHead);


#endif //UNTITLED_SGLINKLIST_H
