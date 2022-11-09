#include <stdio.h>

int main(){
    int datasize = 100;
    int data[datasize];
    for(int i = 0; i < datasize; ++i){
        data[i] = rand() % 101;
    }

    // data配列のソート
    int valueA, valueB;
    int max, min;

    for(int i = 0; i < 100; ++i){
        for(int j = datasize-1; j > i + 1; --j){
            valueA = data[i];
            valueB = data[j];

            if(valueA > valueB){
                max = valueA;
                min = valueB;
                data[i] = min;
                data[j] = max;
            }
        }
    }

    // target 50をバイナリサーチ
    int target = 50;
    int result = -1;
    int left = 0;
    int right = datasize - 1;
    int mid;

    while(left < right){
        mid = (left + right) / 2;

        if(data[mid] == target){
            result = mid;
            break;
        }else if(data[mid] < target){
            left = mid + 1;
        }else{
            right = mid;
        }
    }

    // targetのインデックスの出力
    if(result >= 0){
        printf("%dのインデックスは%dです\n", target, result);
    }else{
        printf("%dは見つかりませんでした\n", target);
    }

    return 0;
}