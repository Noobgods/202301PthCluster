#include<stdio.h>
#define TRUE (1)
#define FALSE (0)
typedef char bool;

int main(){
    bool compare;
    int x, y;

    scanf("%d %d", &x, &y);

    compare = x > y;
    printf("x is greater than y : %d\n", compare);

    compare = x < y;
    printf("x is less than y : %d\n", compare);

    // 이 두개의 수를 비교하고 원하는 값을 출력하려면 어떻게 하여야 할까
    // ? (x > y)

    return 0;
}