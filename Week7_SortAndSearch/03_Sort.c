#include <stdio.h>

void swap(int *x, int *y){
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

// 버블정렬
void bubbleSort(int array[], int size){
    int i, j;

    for(i = 1; i < size; i++) {                 // 1번째 반복문으로 반복 횟수 설정 (인접한 것을 비교하기 때문에 size-1 반복)
        for(j = 0; j < size - i; j++) {         // 2번째 반복문으로 정렬되지 못한 배열의 인접한 요소 탐색
            if(array[j] > array[j + 1]) {       // 앞의 수가 뒤의 수보다 크면 (오름차순으로 정렬하기 위해)
                swap(&array[j], &array[j + 1]); // 두 수를 교환한다.
            }
        }
    }
}

// 선택정렬
void selectionSort(int array[], int size){
    int i, j, least;

    for(i = 0; i < size - 1; i++) {             // 가장 작은 수가 위치하기 위해 사용할 반복문 (마지막은 수행하지 않기 때문에 size-1 반복)
        least = i;                              // 가장 작은 수의 인덱스를 저장할 변수, 찾기전 i를 가장 작은 수로 지정

        for(j = i+1; j < size; j++){            // i의 뒤에서 끝까지 가장 작은 수를 찾는 반복
            if(array[least] > array[j]){        // array[j]보다 array[least]가 작으면
                least = j;                      // 가장 작은 수의 인덱스를 least에 저장
            }
        }

        if(least != i){                         // 처음에 고른 i가 가장 작으면 교환하지 않음
            swap(&array[least], &array[i]);     // i 위치와 least를 교환해서 앞에 작은 수가 오게한다.
        }
    }
}

// 삽입정렬
void insertionSort(int array[], int size){
    int i, j, key;

    for(i = 1; i < size; i++){                              
        // 키 값이 될 요소를 고르고 반복
        // (맨 앞의 키값 0은 처음에 1과 비교하기 때문에 size -1 번반복)

        key = array[i];                                 // 위치를 옮길 키값을 key 변수에 대입

        for(j = i; j > 0 && array[j - 1] > key; j--){   
            // j는 키값의 위치에서 부터 1까지 실행(인접한 요소와 비교하기 때문에 0은 1과 비교),  
            // 비교할 이전의 요소보다 key값이 작으면 앞의 위치는 탐색할 필요 없기 때문에 반복문 종료 (j는 키값이 들어갈 위치) 

            array[j] = array[j - 1];                    // 앞의 요소를 뒤로 이동 
        }

        array[j] = key;                                 // 저장해놓은 키 값을 j에 삽입
    }
}

int main(){
    int array[10] = { 2, 7, 8, 1, 3, 5, 12, 11, 4, 6}, i;

    printf("정렬 전 array 배열 : ");
    for(i = 0; i< 10; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    //bubbleSort(array, 10);        // 버블정렬
    //selectionSort(array, 10);     // 선택정렬
    insertionSort(array, 10);       // 삽입정렬

    printf("정렬 후 array 배열 : ");
    for(i = 0; i< 10; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}