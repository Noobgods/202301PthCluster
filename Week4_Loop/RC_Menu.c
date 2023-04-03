#include <stdio.h>
#include <time.h>   // 시간에 관련된 함수가 선언되어 있는 라이브러리 
#include <stdlib.h> // 표준 라이브러리 (rand(), srand()함수)가 선언되어 있는 라이브러리
enum Menu{  // 열거형 정의 ('Menu'는 생략해서 선언 가능)
    start = 1, check, reset, quit   // 각 원소에 차례로 정수값을 매겨줌 / 사용자가 원하는 정수의 수를 매길 수도 있음
};

int main()
{
    enum Menu select;   // enum 자료형을 가진 select 선언 
    srand(time(NULL));  // 난수 생성을 위한 시드값 초기화 (시드값은 난수를 생성하기 위해 rand()호출시 바뀌는 수가 들어감/ 해당 시드는 시간값)
    int answer, input; 
    answer = rand()%100 +1; // rand()로 생성된 난수는 원하는 범위의 수가 안나올 수 있기 때문에 % 연산자를 이용해서 범위를 제한함.
    while(1)
    {
        printf("메뉴 선택\n 1. 숫자 입력\n 2. 답 확인\n 3. 답 리셋\n 4. 종료\n");
        scanf("%d", &select);

        switch(select)
        {
            case start: // 열거형의 각 원소는 각자 매핑되는 정수와 같이 사용할 수 있음 (현재 1에서 4까지 매핑 되어있음)
                printf("숫자를 입력하세요 : "); scanf("%d", &input);
                if(input == answer) printf("정답입니다!\n");
                else printf("틀렸습니다!\n");
                break;
            case check: 
                printf("정답은 %d 입니다.\n", answer);
                break;
            case reset:
                printf("답을 리셋합니다. 이전 답은 %d 입니다.\n", answer);
                answer = rand()%100 +1;
                break;
            case quit:
                printf("프로그램을 종료합니다.\n");
                return 0;   // 프로그램을 종요하기 위한 여러가지 방법이 존재. exit()함수, return을 사용 등등.
            default:
                printf("메뉴에 없습니다.\n");
        }
    }
    return 0;
}

// enum을 사용하는 방법은 여러가지가 있기 때문에 더 많이 알고 싶다면 열거형에 대하여 검색해볼것!