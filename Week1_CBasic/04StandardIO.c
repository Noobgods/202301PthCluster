#include <stdio.h>

int main(){
    int num;
    char c;
    scanf("%d", &num);             // scanf() 함수, 입력을 받음 &반드시 입력할 것.
    printf("입력값 %d\n", num);    // printf() 출력함수

    scanf("\n");    // 버퍼 비우기
    /* 
    버퍼 비우는 많은 방법이 있음.
    각자 자신에게 맞는 방법을 찾아 쓸 것!
    */
    c = getchar();  // 문자 입력(c 변수)
    putchar(c);     // 문자 출력(c 변수)

    return 0;
}