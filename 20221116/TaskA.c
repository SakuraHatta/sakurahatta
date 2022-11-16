#include <stdio.h>
#define STACK_SIZE 5

int stack[STACK_SIZE];
int stack_num;

int main(){
    stack_num = 0;

    push(1);    // push1回目
    print();    // 表示
    push(3);    // push2回目
    print();    // 表示
    push(5);    // push3回目
    print();    // 表示
    push(7);    // push4回目
    print();    // 表示
    push(9);    // push5回目
    print();    // 表示
    pop();      // pop1回目
    print();    // 表示
    pop();      // pop2回目
    print();    // 表示
}

void push(int value){
    if(stack_num < STACK_SIZE){
        stack[stack_num] = value;
        stack_num++;
    }
}

void pop(){
    if(stack_num > 0){
        stack_num--;
    }
}

void print(){
    printf("stack[\t");
    for(int i = 0; i < stack_num; ++i){
        printf("%d\t", stack[i]);
    }
    printf("]\n");
}