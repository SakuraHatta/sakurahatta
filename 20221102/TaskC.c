#include <stdio.h>

int main(){
    int data[10];

    for(int i = 0; i < 10; ++i){
        data[i] = rand();
        printf("data[%d] = %d\n", i, data[i]);
    }

    return 0;
}