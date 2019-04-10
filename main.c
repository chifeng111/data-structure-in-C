#include <stdio.h>
#include <stdlib.h>
#include "SgLinkList.h"

int main(int argc, const char *argv[]) {
    pNODE sLinkList = CreateSgLinkList();
    printf("链表为空：%d\n", IsEmptySgLinkList(sLinkList));
//    测试插入
    InsertEleSgLinkList(sLinkList, 1, 1);
    InsertEleSgLinkList(sLinkList, 2, 2);
    InsertEleSgLinkList(sLinkList, 3, 3);
    InsertEleSgLinkList(sLinkList, 4, 4);
    printf("链表元素个数：%d\n", GetLengthSgLinkList(sLinkList));
    printf("链表为空：%d\n", IsEmptySgLinkList(sLinkList));
    TraverseSgLinkList(sLinkList);

//    测试删除
    DeleteEleSgLinkList(sLinkList, 1);
    TraverseSgLinkList(sLinkList);

//    测试释放内存
    FreeMemory(&sLinkList);
    if (sLinkList == NULL) {
        printf("内存已释放\n");
    } else {
        printf("内存未释放\n");
    }
}
