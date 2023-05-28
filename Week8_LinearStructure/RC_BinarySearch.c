#include <stdio.h>

int binary_search(int array[], int key, int start, int end){  // (배열, 찾는 값, 시작, 끝)
    // 세개의 위치 인덱스 start, end, mid
    int mid;    // 중앙 인덱스

    while(start <= end){    // start와 end가 같거나 start가 클경우
        mid = (start + end) / 2;    // 중앙 인덱스를 start와 end의 중간으로 둔다.

        if(array[mid] == key){      // 중앙 값이 key 값과 같으면 중앙 인덱스 반환
            return mid;
        }
        else if(array[mid] > key){  // 중앙 값이 key 값보다 크면 mid의 앞을 끝으로 둔다.
            end = mid - 1;
        }
        else{                       // 중앙 값이 key 값보다 작으면 mid의 뒤를 시작으로 둔다.
            start = mid + 1;
        }
    }
    return -1;  // 못찾으면 리턴
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
    
    // 이분탐색함수에서 값 리턴
    index = binary_search(array, input, 0, size);

    if(index == -1){
        printf("찾고자 하는 수가 없습니다.\n");
    }
    else {
        printf("찾고자 하는 수는 array[%d]에 있습니다. \n", index);
    }


    return 0;
}