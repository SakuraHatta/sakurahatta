#include <iostream>
#include <vector>

std::vector<int> stack;


void push (int value){
    stack.push_back(value);
}

void pop (){
    stack.pop_back();
}

void print(){
    std::vector<int>::iterator itr = stack.begin();
    printf("stack[\t");
    for(auto itr = stack.begin(); itr != stack.end(); ++itr){
        std::cout << *itr << "\t";
    }
    printf("]\n");
}

int main(){
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

    return 0;
}
