#include <stdio.h>

int main(){
    printf("%d \n", 10);
    printf("%c \n", 'A');
    printf("%f \n", 3.14);
    printf("%s \n", "안녕하세요.");
    printf("%x \n", 31);

    /*
    
    컴퓨터는 2진수로 이루어져 있음.
    1 bit = 0~1 -> 2^1
    2 bit = 0~3 -> 2^2
    3 bit = 0~7 -> 2^3
    .
    .
    .
    8 bit = 0~255 -> 2^8 = 1 byte

    int는 4byte -> 수의 범위가 2^32 까지 표현.
    하지만 int형은 2^31 까지 표현한다.
    왜? -> 맨앞의 비트는 음/양수 표현을 위해 따로 처리되기 때문에

    %d : decimal (10진수)
    %x : hexadecimal (16진수)
    %c : character (문자)
    %s : string (문자열)
    %f : flaoting point number (부동소수점)
    %o : octal (8진수)
    %ld : 32비트 10진수
    */

    return 0;
}