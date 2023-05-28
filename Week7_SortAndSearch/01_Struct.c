#include <stdio.h>


// typedef를 이용해 구조체 이름으로 자료형을 선언할 수 있다.
typedef struct{ 
    int number; // 멤버변수
    char name[20];
    float score;
} student;

int main(){

    student std[10] = {
        { 20404, "권용현", },
        { 20506, "김민준", },
        { 20604, "박성민", },
        { 20516, "양승흠", },
        { 20604, "김은성", },
        { 20611, "박성민", },
        { 20614, "부혁찬", },
        { 20620, "이계진", },
        { 20624, "이우진", },
        { 20914, "이성민", }
    }; // 학생들 데이터
    float input_score; // 입력받을 데이터
    int i;

    printf("학생들의 성적을 입력하세요.\n");
    for (i = 0; i<10; i++){
        // 학생들 성적 입력
        printf("%d %s 성적 입력 : ", std[i].number, std[i].name);  
        scanf("%f", &input_score);
        std[i].score = input_score;
    }

    for (i = 0; i<10; i++){
        printf("%-7d %s %f\n", std[i].number, std[i].name, std[i].score);
    }

    return 0;
}