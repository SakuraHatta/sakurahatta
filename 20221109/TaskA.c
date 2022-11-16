#include <stdio.h>

int main(){
    int datasize = 11;
    int data[datasize];
    for(int i = 0; i < datasize; ++i){
        data[i] = i;
        //printf("%d\n", data[i]);    // デバッグ用
    }

    shuffle(data, datasize);

    /*for(int i = 0; i < datasize; ++i){
        printf("%d,", data[i]);     // debug
    }*/

    //printf("\n");   // debug

    int result = -1;
    int target = 5;
    result = linear(data, datasize, target);

    printf("%dのインデックスは%dです\n", target, result);

    return 0;
}

void shuffle(int array[], int size){
    for(int i = 0; i < size; ++i){
        int j, k;
        j = rand() % size;  // 0~10
        k = array[i];   // array[i]を保持
        array[i] = array[j];    // arrayの入れ替え
        array[j] = k;   // 保持しておいた配列を入れる
    }
}

int linear(int array[], int size, int t){
    int r = -1;

    for(int i = 0; i < size; ++i){
        if(array[i] == t){
            r = i;

            break;
        }
    }

    return r;
}