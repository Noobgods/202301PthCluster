#include <stdio.h>

void oneParameter(int x)
{
    printf("one parameter : %d\n");
}

void twoPrameter(int x, int y)
{
    printf("Two parameters : %d, %d\n");
}

int main()
{
    oneParameter(7);

    twoPrameters(3, 4);

    return 0;
}