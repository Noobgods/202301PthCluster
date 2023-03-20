// #1 비트, 논리 연산자
#include <stdio.h>

int main()
{
    int a = 0, b = 1, c;

	// #비트 연산자
    // 비트 합 (OR)
	c = a | b;    
	printf("| : %d\n", c);
	
    // 비트 곱 (AND)
	c = a & b;    
	printf("& : %d\n", c);

    // 배타적 논리합 (XOR)
	c = a ^ b;    
	printf("^ : %d\n", c);

    // 비트 반전
    c = ~a;
	printf("~ : %d\n", c);

	printf("\n\n");

    // #논리 연산자
    // 논리 합 (OR)
	c = a || b;    
	printf("%d\n", c);

    // 논리 곱 (AND)
	c = a && b;
	printf("%d\n", c);

    // 부정 (NOT)
	c = !b;    
	printf("%d\n", c);


	printf("\n\n");
	// #비교 연산자
    // 제어문에서 사용...

	// #복합 대입 연산자
    // +=, -=, *=, /=, %= 와 같이 산술연산자와 함께 or 비트연산자와 함께
    // a += b 와 a = a + b 는 같음

	return 0;
}