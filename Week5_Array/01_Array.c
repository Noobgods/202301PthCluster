#include <stdio.h>

void calualteScore();
void twoDimensionArray();

int main(){
    int array1[5] = {1, 2, 3, 4, 5};
    // array = {1,2,3,4,5}; error!
    int array2[] = {2, 4, 6, 8, 10, 12};

    int i, j;

    printf("%d\n", array1[2]);
    
    // 배열 출력
    for(i = 0; i < 5; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");

    
    // 성적 입력 프로그램
    //calualteScore();

    // 2차원 배열
    //twoDimensionArray();

    return 0;
}

void calualteScore(){
    int score[100];
    int input, sum = 0, i, n;
    float avg;

    printf("성적을 입력할 학생 수 : ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &score[i]);
    }

    for(i = 0; i < n; i++){
        sum += score[i];
    }

    avg = (float)sum / (float)n;

    printf("학생들의 성적 평균 : %f\n", avg);
}

void twoDimensionArray(){
    int array[8][9];
    int i, j;

    for(i = 2; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            array[i-2][j-1] = i * j;
        }
    }

    for(i = 0; i < 8; i++){
        for(j = 0; j < 9; j++){
            printf("%-3d", array[i][j]);
        }
        printf("\n");
    }
}