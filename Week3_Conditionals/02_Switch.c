#include<stdio.h>
typedef char bool;

int main()
{
    int input;

    // 메뉴구성.. else if 많이 쓰게 됨
    // switch가 해결할 수 있음

    printf("할일을 선택하세요.\n");
    printf("1. 식사하기\n");
    printf("2. 씻기\n");
    printf("3. 공부하기\n");
    scanf("%d", &input);

    switch(input)
    {
        // ERROR!!!
        // case input == 0:
        //     printf("식사했다.\n")
        //     break;
        case 1:
            printf("식사했다.\n");
            break;
        case 2:
            printf("씻었다.\n");
            break;
        case 3:
            printf("공부했다.\n");
            break;
        default:
            printf("무엇을 해야할지 모르겠다.\n");
    }

    // if와 switch의 차이점 : 성능과 작동 방식
    // if는 실행중에 조건을 체크 함.
    // switch는 미리 만들어 놓은 곳(주소)에 점프 (그래서 조건문이 안되고 정수만 가능)

    return 0;
}