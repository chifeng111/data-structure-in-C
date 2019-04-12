//
// Created by liaozhenhua on 2019-04-11.
//

#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H

typedef int ElementType;

typedef struct Queue{
    int Capacity;
    int Front;
    int Rear;
    int Size;
    ElementType *Array;
} *Queue;

Queue CreateQueue(int MaxElements);
int IsEmpty(Queue queue);
int IsFull(Queue queue);
void EnQueue(ElementType data, Queue queue);
ElementType DeQueue(Queue queue);


#endif //UNTITLED_QUEUE_H
