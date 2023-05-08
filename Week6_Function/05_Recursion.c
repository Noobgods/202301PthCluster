#include <stdio.h>

int factorial(int x);

int main()
{
    int n, i, result_for=1, result_rec;

    printf("Enter the factorial n value : ");
    scanf("%d", &n);

    // for를 사용한 팩토리얼 구하기
    for (i = 1; i<=n; i++){
        result_for *= i;
    }
    printf("Factorial using for statement : %d! = %d \n", n, result_for);

    // 재귀를 사용한 팩토리얼 구하기
    result_rec = factorial(n);

    printf("Factorial using recursion : %d! = %d \n", n, result_rec);

    return 0;
}

int factorial(int x)
{
    if (x == 1) return 1;
    return x * factorial(x-1);
}