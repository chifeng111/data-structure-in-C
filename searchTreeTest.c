//
// Created by liaozhenhua on 2019-04-15.
//

#include <stdio.h>
#include <stdlib.h>
#include "SearchTree.h"

int main() {
    SearchTree tree = CreateTree();
    Insert(6, &tree);
    Insert(2, &tree);
    Insert(8, &tree);
    Insert(4, &tree);
    Insert(1, &tree);
    Insert(3, &tree);
    PreTraverse(tree);

    SearchTree treeMin = FindMin(tree);
    printf("\n最小：%d\n", treeMin->data);

    SearchTree treeMax = FindMax(tree);
    printf("最大：%d\n", treeMax->data);

//    测试删除
    Delete(4, &tree);
    PreTraverse(tree);
    putchar('\n');

    Insert(4, &tree);
    Delete(2, &tree);
    PreTraverse(tree);
    putchar('\n');

//    删除根
    Delete(6, &tree);
    PreTraverse(tree);
    putchar('\n');
}