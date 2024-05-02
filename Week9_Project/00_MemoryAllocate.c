#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array, i, size = 3;
    //array = (int*)malloc(sizeof(int) * size); // 메모리 할당 (초기화 X)
    array = (int*)calloc(size, sizeof(int));    // 메모리 할당 (0으로 초기화)

    /*
    array[0] = 12;
    array[1] = 23;
    array[2] = 34;
    */

    for(i = 0; i < size; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    free(array);    // 메모리 해제

    return 0;
}