#include <stdio.h>

int main(){
    int datasize = 100;
    int data[datasize];
    for(int i = 0; i < datasize; ++i){
        data[i] = rand();
    }

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

    for(int i = 0; i < datasize; ++i){
        printf("%d\n", data[i]);
    }

    return 0;
}