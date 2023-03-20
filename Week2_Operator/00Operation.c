// #0 산술, 증감연산자
#include <stdio.h>

int main()
{
    int a, b, add, sub, mul, rem, inc, dec;
    float div;
    a = 7, b= 2;
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / (float)b;  // 형변환

    printf("+ : %d\n",add);
    printf("- : %d\n",sub);
    printf("* : %d\n",mul);
    printf("/ : %f\n",div);     // 정수 변환시 소수점 이하 내림, 실수를 출력하기 위해선? -> '%f' 사용

    rem = a % b;
    inc = a++;  // 대입 후 계산
    dec = b--;  // 대입 후 계산
    printf("%% : %d\n", rem);   // %를 문자 출력하기 위해선 %% 사용
    printf("++ : %d\n", inc);   // 7, 2 출력
    printf("-- : %d\n", dec);

    return 0;
}