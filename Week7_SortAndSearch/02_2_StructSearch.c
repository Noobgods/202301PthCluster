#include <stdio.h>

typedef struct{
    int number;
    char name[20];
    float score;
} student;

int linear_search(student array[], int size, int key){
    int i = 0;
    
    for(i = 0; i < size; i++){
        if(array[i].number == key){
            return i;
        }
    }
    return -1;
}

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
    };
    // 학생들 데이터
    float input_score;
    int i, input, index;

    printf("학생들의 성적을 입력하세요.\n");
    for (i = 0; i<10; i++){
        // 학생들 성적 입력
        printf("%d %s 성적 입력 : ", std[i].number, std[i].name);
        scanf("%f", &input_score);
        std[i].score = input_score;
    }

    printf("성적을 보고싶은 학생의 번호를 입력하세요. : ");
    scanf("%d", &input);
    index = linear_search(std, 10, input); // 인자(학생 배열, 학생 수, 학생의 성적)

    if(index == -1){
        printf("점수를 잘못 입력하였습니다.\n");
    }
    else {
        printf("선택한 학생의 점수는 ");
        printf("%.2f 입니다.", std[index].score);  // 점수 출력
    }

    return 0;
}