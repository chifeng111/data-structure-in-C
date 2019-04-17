//
// Created by liaozhenhua on 2019-04-15.
//

#ifndef UNTITLED_SEARCHTREE_H
#define UNTITLED_SEARCHTREE_H

typedef int ElementType;
typedef struct Tree *SearchTree;
typedef struct Tree {
    ElementType data;
    SearchTree Left;
    SearchTree Right;
} Node;

SearchTree CreateTree();

SearchTree Find(ElementType e, SearchTree tree);

SearchTree FindMin(SearchTree tree);

SearchTree FindMax(SearchTree tree);

void PreTraverse(SearchTree tree);

void Insert(ElementType e, SearchTree *tree);

void Delete(ElementType e, SearchTree *tree);

#endif //UNTITLED_SEARCHTREE_H
