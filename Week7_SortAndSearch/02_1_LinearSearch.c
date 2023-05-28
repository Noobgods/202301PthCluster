#include <stdio.h>

int linear_search(int array[], int size, int key){
    int i = 0;
    
    for(i = 0; i < size; i++){  // 배열의 모든 요소 접근
        if(array[i] == key){    // 키값과 배열의 값이 같으면
            return i;           // 배열의 인덱스 리턴
        }
    }
    return -1;                  // 없는경우 -1 리턴(인덱스는 0<=i 기 때문에 음수가 나오지 않음)
}

int main(){
    int array[30], i, size, input, index;

    // 배열의 크기 입력
    printf("배열의 갯수를 입력하세요. n < 30\n");
    scanf("%d", &size);

    // 배열에 값 입력
    for (i = 0; i<size; i++){
        printf("%d 번째 정수 입력 : ", i);
        scanf("%d", &input);
    }

    // 찾고자 하는 수 입력
    printf("찾는 수를 입력하세요. : ");
    scanf("%d", &input);
    
    // 선형탐색함수에서 값 리턴
    index = linear_search(array, size, input);

    if(index == -1){
        printf("찾고자 하는 수가 없습니다.\n");
    }
    else {
        printf("찾고자 하는 수는 array[%d]에 있습니다. \n", index);
    }

    return 0;
}