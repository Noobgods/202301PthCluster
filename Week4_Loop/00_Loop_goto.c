#include <stdio.h>

int main(){
    int i = 0;

    loop_body:      // goto 시작

    printf("Loop : %d\n", i);   // 반복할 구문

    i++;    // 증감문
    
    if(i<10){       // 참 일때 반복할 조건
        goto loop_body;     // loop_body로 가기위한 goto
    }

    return 0;
}