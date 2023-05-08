#include <stdio.h>

int sum(int x, int y)
{   
    int z = x + y;

    return z; // return할 값의 자료형(z의 자료형)과 선언시 반환 자료형(int)은 같아야함
}

void noReturn()
{
    printf("Before return.\n");

    return;
    
    printf("After return.\n");
}

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