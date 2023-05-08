#include <stdio.h>

/*
    void* 는 타입이 존재하지 않으며, 모든 주소를 저장할 수 있는 포인터이다.
    어떠한 주소값도 받을 수 있기 때문에 변수의 주소뿐만 아니라 함수의 주소도 받을 수 있다.
    void*는 주소값을 저장하고 있을뿐 메모리 공간을 어떻게 사용하는지 알 수 없기 때문에 사용할때는 반드시 명시적으로 형변환하여 사용해야 한다.
*/
int sum(int x, int y);

int main()
{
    int n = 3, s;
    void *pNumber, *pFunction;

    pNumber = &n;
    // *p = 7;  ERROR! p의 형이 정해지지 않았음.
    *(int*)pNumber = 7;   // p의 자료형을 int*로 형변환하여 어떠한 자료형인지 명시하고 사용해야한다.
    
    printf("n = %d\n", n);
    printf("*p = %d\n", *(int*)pNumber);

    //-----------------------------------------------------------------------------
    // void*를 이용한 함수 포인터는 어려울 수 있기 때문에 "void*는 함수도 받을 수 있다." 라고만 알고 그냥 넘어가세요.
    pFunction = &sum;

    s = (*(int (*)(int, int))pFunction)(1, 4);
    // * : pFunction의 값(함수)
    // (int (*)(int, int)) : 함수를 받을 수 있는 함수 포인터의 형태로 형변환
    printf("sum = %d", s);

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}