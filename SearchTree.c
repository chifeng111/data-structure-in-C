//
// Created by liaozhenhua on 2019-04-15.
//

#include <stdio.h>
#include <stdlib.h>
#include "SearchTree.h"

SearchTree CreateTree() {
    SearchTree tree = NULL;
    return tree;
}

SearchTree Find(ElementType e, SearchTree tree) {
    if (tree == NULL) {
        return NULL;
    }
    if (tree->data > e) {
        return Find(e, tree->Right);
    } else if (tree->data < e) {
        return Find(e, tree->Left);
    } else {
        return tree;
    }
}

SearchTree FindMin(SearchTree tree) {
    if (tree == NULL) {
        return NULL;
    }
    if (tree->Left == NULL) {
        return tree;
    } else {
        return FindMin(tree->Left);
    }
}

SearchTree FindMax(SearchTree tree) {
    if (tree == NULL) {
        return NULL;
    }
    if (tree->Right == NULL) {
        return tree;
    } else {
        return FindMax(tree->Right);
    }
}

void PreTraverse(SearchTree tree) {
    if (tree == NULL) {
        return;
    }
    PreTraverse(tree->Left);
    printf("%d ", tree->data);
    PreTraverse(tree->Right);
}

void Insert(ElementType e, SearchTree *tree) {
    if (*tree == NULL) {
        SearchTree T = (Node *) malloc(sizeof(Node));
        T->data = e;
        T->Left = T->Right = NULL;
        *tree = T;
        return;
    }
    if (e < (*tree)->data) {
        Insert(e, &(*tree)->Left);
    } else if (e > (*tree)->data) {
        Insert(e, &(*tree)->Right);
    } else {
        return;
    }
}

void Delete(ElementType e, SearchTree *tree) {
    if (*tree == NULL) {
        return;
    }
    if (e > (*tree)->data) {
        Delete(e, &(*tree)->Right);
    } else if (e < (*tree)->data) {
        Delete(e, &(*tree)->Left);
    } else {
        if ((*tree)->Left == NULL) {
            *tree = (*tree)->Right;
        } else if ((*tree)->Right == NULL) {
            *tree = (*tree)->Left;
        } else {
            SearchTree tree1 = FindMin((*tree)->Right);
            (*tree)->data = tree1->data;
            Delete(tree1->data, &(*tree)->Right);
        }
    }
}