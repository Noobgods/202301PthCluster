#include <stdio.h>

int main(){
    // 문자열을 만들기 위해선 배열 사용
    char str1[7] = "string";
    // char str2[] = {'s', 't', 'r', 'i', 'n', 'g'};    // 널 문자 없음.
    char str2[7] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
    char str3[7], input[12]; 
    // str3 = "string";    error!
    str3[0] = 's'; 
    str3[1] = 't';
    str3[2] = 'r';
    str3[3] = 'i';
    str3[4] = 'n';
    str3[5] = 'g';
    str3[6] = '\0';

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    scanf("%s", input);     // 문자열 11자까지 입력
    printf("%s", input);

    // 세가지 입력해보기
    // mynameisjh       : 10자 정상적으로 입력
    // mynameispark     : 12자 이기 때문에 오류
    // my name is jh    : 띄어쓰기가 있으면 띄어쓰기 이전까지 입력된다.

    // 문자열 범위 넘었을때 메모리 초과해서 입력.
    // 하지만 printf는 '\0' 이 나올때까지 변수를 모두 출력한다
    return 0;
}