#include <stdio.h>

int main(){
    int number;
    printf("%d \n", sizeof(char));
    printf("%d \n", sizeof(short));
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(long));
    printf("%d \n", sizeof(long long));

    // sizeof 예약어로 인자의 데이터 사이즈를 알 수 있음.
    // 예약어지만 함수처럼 사용.

    return 0;
}