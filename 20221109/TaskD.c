#include <stdio.h>
#include <stdlib.h>

//const int ERROR_NOT_FOUND = -1;

typedef enum {
    Success, 
    ErrorNotFound
} Status;

typedef struct {
    Status status;
    //int status;
    int value;
} Result;

int main(){
    int datasize = 11;
    int data[datasize];
    for(int i = 0; i < datasize; ++i){
        data[i] = i;
        //printf("%d\n", data[i]);    // デバッグ用
    }

    shuffle(data, datasize);
    

    int target = 5;
    Result result;
    printf("ここまでclear0\n");
    linear(data, datasize, target, 0, result);
    printf("ここまでclear1\n");

    /*if (result == -1){
        printf("%dのインデックスは存在しません\n", target);
    }else{
        printf("%dのインデックスは%dです\n", target, result);
    }*/

    //printf("%d\n", result.status);

    /*switch (result.status){
        case Success:
            printf("%dのインデックスは%dです\n", target, result.value);
            break;
        case ErrorNotFound:
            printf("%dのインデックスは存在しません\n", target);
            break;
        default:
            break;
    }*/

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

void linear(int array[], int size, int t, int index, Result *result){
    printf("とりあえずここまできたよ\n");
    //Result result;
    if (index > size){
        printf("無し\n");
        result->status = ErrorNotFound;
        result->value = -1;
        printf("なしでした\n");
    }
    else if (array[index] == t){
        //Result result = { Success, index };
        printf("find\n");
        result->status = 'Success';     // ここが通ってないしらんけど
        printf("statusの代入はできた\n");
        result->value = index;
        printf("resultの代入もできた\n");
    }
    else{
        printf("next\n");
        linear(array, size, t, index + 1, result);
    }
    //return result;
}