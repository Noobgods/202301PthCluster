#include <stdio.h>

int main(){
    int i=0;

    while(i < 3)    // i가 0~2까지 실행 (끝나면 i==3)
    {
        printf("Loop : %d\n", i);
        i++;
    }

    // 위의 반복문에서 i가 3으로 되어 있기 때문에 아래 while문의 조건에는 거짓이 된다.
    // 아래가 do/while이 아닌 while이었으면 i < 3 의 값이 false기 때문에 실행 X
    do
    {
        printf("do while : %d\n", i);
    } while (i < 3);

    // while(1){
    //     printf("무한루프\n");    // 실행 중엔 ctrl+c로 빠져나올 수 있음
    // }

    return 0;
}