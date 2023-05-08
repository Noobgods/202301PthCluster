#include <stdio.h>

int swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, y;

    x= 3, y= 7;

    printf("Before swap : %d  %d\n", x, y);
    swap(&x, &y);

    printf("After swap : %d  %d\n", x, y);   

    return 0;
}