//
// Created by liaozhenhua on 2019-04-11.
//

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

Queue CreateQueue(int MaxElements) {
    Queue queue = malloc(sizeof(Queue));
    if (queue == NULL) {
        printf("内存不够\n");
        exit(EXIT_FAILURE);
    }
    queue->Capacity = MaxElements;
    queue->Front = 0;
    queue->Rear = queue->Capacity - 1;
    queue->Size = 0;
    queue->Array = malloc(sizeof(ElementType) * MaxElements);
    if (queue->Array == NULL) {
        printf("内存不够\n");
        exit(EXIT_FAILURE);
    }

    return queue;
}

int IsEmpty(Queue queue) {
    return queue->Size == 0;
}

int IsFull(Queue queue) {
    return queue->Size == queue->Capacity;
}

void EnQueue(ElementType data, Queue queue) {
    if (IsFull(queue)) {
        printf("错误，队列已满\n");
        return;
    }

    if (queue->Rear == queue->Capacity - 1) {
        queue->Rear = 0;
        queue->Array[queue->Rear] = data;
    } else {
        queue->Array[++queue->Rear] = data;
    }
    ++queue->Size;
}

ElementType DeQueue(Queue queue) {
    if (IsEmpty(queue)) {
        printf("错误，队列为空\n");
        return -1;
    }

    ElementType data;
    if (queue->Front == queue->Capacity - 1) {
        data = queue->Array[queue->Front];
        queue->Front = 0;
    } else {
        data = queue->Array[queue->Front++];
    }
    --queue->Size;
    return data;
}