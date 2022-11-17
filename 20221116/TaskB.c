#include <stdio.h>

#define QUEUE_SIZE 5

int queue[QUEUE_SIZE];
int queue_num;
int queue_head;

int main(){
    queue_head = queue_num = 0;     // 初期化

    enqueue(1);     // enqueue1回目
    queuePrint();   // 表示
    enqueue(3);     // enqueue2回目
    queuePrint();   // 表示
    enqueue(5);     // enqueue3回目
    queuePrint();   // 表示
    enqueue(7);     // enqueue4回目
    queuePrint();   // 表示
    enqueue(9);     // enqueue5回目
    queuePrint();   // 表示
    dequeue();      // dequeue1回目
    queuePrint();   // 表示
    dequeue();      // dequeue2回目
    queuePrint();   // 表示
}

void enqueue(int value){
    if(queue_num < QUEUE_SIZE){
        queue[queue_num] = value;
        queue_num++;
    }
}

void dequeue(){
    if(queue_num > 0){
        queue_head = (queue_head + 1) % QUEUE_SIZE;
        queue_num--;
    }
}

void queuePrint(){
    printf("queue[\t");
    for(int i = queue_head; i < queue_head + queue_num; ++i){
        printf("%d\t", queue[i]);
    }
    printf("]\n");
}