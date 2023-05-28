#include<stdio.h>

int main()
{
    int input, x = 2, y = 2, z = 3, i, j, n, sum=0;

    // 1. 변수
    int decimal = 7;              // 정수형 ('d'ecimal : 일반적으로 10진수)
    float floating_point = 1.23;  // 실수형 ('f'loating number : 부동숫자)
    char character = 'c';         // 문자형 ('c'haracter : 문자)

    int array[10] = {1, 2, 4, 7, 9, 3, 5, 6, 1, 2}; // 정수형 배열 10개

    // 2. 출력
    /* 
        printf() 함수
        큰따옴표 내부에는 출력하고자 하는 '문자열' 입력
        printf() 함수로 변수를 출력하기 위해선 %d, %f와 같은 출력형식을 지정해 출력해야 함. 

        출력형식이 하나면 ',' 뒤에 변수 하나, 두개면 변수 두개 작성
    */
    printf("prints an integer : %d\n", decimal);    // 숫자형 변수 하나 출력 
    // 정수형-> 10진수로 출력하기 위해 출력형식 %d(ecimal) 입력
    printf("prints a float : %f, prints a character : %c\n", floating_point, character);  // 실수형, 문자형 변수 두개 출력
    // 실수형 %f(loating point) 출력형식 지정, 문자형 %c(haracter) 출력형식 지정


    // 3. 입력
    /*
        scanf() 함수
        큰따옴표 내부에는 입력하고자 하는 변수에 맞는 형식 입력
        ex) 변수가 int형이면 %d, float형이면 %f 등등... 

        입력하고자 하는 변수는 변수명 앞에 &를 입력하여 해당 주소에 값을 넣는다는 것을 명시
    */
    scanf("%d", &input); // 정수형 변수 input에 10진수로 입력


    // 4. 연산자
    /*
        x와 y를 계산한 결과값이 나오는 연산자
        + - * /     : 기본 사칙연산 (덧셈, 뺄셈, 곱셈, 나눗셈)
        x % y       : x를 y로 나눈 나머지
        x++         : x를 해당 식의 연산이 끝난 후 1만큼 더해줌
        x--         : x를 해당 식의 연산이 끝난 후 1만큼 빼줌
        ++x         : x를 해당 식이 연산을 하기 전에 1만큼 더해줌
        --x         : x를 해당 식이 연산을 하기 전에 1만큼 빼줌

        연산결과가 true 또는 false로 값이 나오는 연산자들 (조건에 사용)
        > < >= <= : 비교연산자
        && || !=  : 논리연산자 (and, or, not)
    */


    // 5. 조건문
    // if문
    if(x == y)
        printf("x and y are equal.\n");     // excute

    // if, else 문
    if(x == z)
        printf("x and z are equal.\n");
    else
        printf("x and z are not equal.\n");     // excute

    // if, else if 문 
    if(x > z) 
        printf("x is greater than z.\n");
    else if(z > x)
        printf("z is greater than x.\n");     // excute
    else
        printf("x and y are equal.\n");


    // 6. 반복문
    // 단순한 반복
    // i = 0 시작, 0 <= i < 10 범위 내에서 실행(총 10회)
    for(i = 0; i < 10; i++)
    {
        printf("i == %d\n", i);
    }

    // 간단한 합계
    // j = 1 시작, 1 <= j <= 10 범위 내에서 실행(총 10회)
    for(j = 1; j <= 10; j++)    
    {
        sum += j;
    }
    printf("Sum of 1 to 10 : %d\n", sum);   // 55
    sum = 0;
    
    // 조금 복잡한 합계
    // n = 1 시작, n^2를 n <= 10까지 더함
    for(n = 1; n <= 10; n++)
    {
        sum += n * n;
    }
    printf("sum(2n +1), n is 1 to 10 : %d\n", sum); // 385


    // 7. 배열
    // int array[10] = {1, 2, 4, 7, 9, 3, 5, 6, 1, 2} // 위에 선언되어 있음

    // 반복문으로 모든 배열에 접근하여 출력
    for(i = 0; i < 10; i++)
    {
        printf("array[%d] is %d\n");
    }

    return 0;
}