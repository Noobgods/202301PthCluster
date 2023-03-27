#include<stdio.h>
typedef char bool;

int main()
{
    bool compare;
    int x, y;

    scanf("%d %d", &x, &y);
    
    compare = x > y;
    /*  if 사용
    if (compare)
    {
        printf("x is greater than y\n");
    }
    if (x < y)
    {
        printf("x is less than y\n");
    }
    */

    /*  if else 사용
    if (compare)
    {
        printf("x is greater than y\n");
    }
    else 
    {
        printf("x is less than or equal to y");
    }
    */

    /*  if, else if, else 사용
    if (compare)
    {
        printf("x is greater than y\n");
    }
    else if (x < y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is equal to y");
    }
    */

    // 논리 연산자 사용
    scanf("%d %d", &x, &y);
    if (x < y || x > y) {
        printf("not equal.\n");
    }
    else 
    {
        printf("equal\n");
    }

    return 0;
}