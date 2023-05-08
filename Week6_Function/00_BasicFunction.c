#include <stdio.h>

void hello(void)
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