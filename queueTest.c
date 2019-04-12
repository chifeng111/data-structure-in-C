//
// Created by liaozhenhua on 2019-04-11.
//

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void printList(int *array, int maxLength) {
    for (int i = 0; i < maxLength; i++) {
        printf("%d\t", array[i]);
    }
    putchar('\n');
}

int main() {
    Queue queue = CreateQueue(10);
    printList(queue->Array, 10);
    printf("队列为空：%d\n", IsEmpty(queue));

//    测试进队
    EnQueue(1, queue);
    EnQueue(2, queue);
    printList(queue->Array, 10);
    printf("队列为空：%d\n", IsEmpty(queue));

//    测试出队
    printf("出队元素：%d\n", DeQueue(queue));
    printf("出队元素：%d\n", DeQueue(queue));
    printf("队列为空：%d\n", IsEmpty(queue));
    DeQueue(queue);

//    测试满队
    EnQueue(10, queue);
    EnQueue(20, queue);
    EnQueue(30, queue);
    EnQueue(40, queue);
    EnQueue(50, queue);
    EnQueue(60, queue);
    EnQueue(70, queue);
    EnQueue(80, queue);
    EnQueue(90, queue);
    EnQueue(100, queue);
    printf("队列已满：%d\n", IsFull(queue));
    printList(queue->Array, 10);
    EnQueue(110, queue);

    printf("出队元素：%d\n", DeQueue(queue));
    EnQueue(110, queue);
    printList(queue->Array, 10);
}