#include <stdio.h>

int sum(int x, int y);
void noReturn();

int main()
{
    int n1, n2, s;
    printf("Enter two values to add : ");
    scanf("%d %d", &n1, &n2);

    s = sum(n1, n2);
    printf("%d + %d = %d\n", n1, n2, s);

    noReturn();
    
    return 0;
}

int sum(int x, int y)
{   
    int z = x + y;

    return z;
}

void noReturn()
{
    printf("Before return.\n");

    return;
    
    printf("After return.\n");
}