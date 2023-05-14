#include <stdio.h>

void hello(void) // == void hello()
{
    printf("Hello \n");
}

int main()
{
    printf("Call function once\n");
    hello();

    printf("Call function twice\n");
    hello();

    return 0;
}