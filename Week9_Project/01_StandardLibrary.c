#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 색상코드
#define BLACK		0
#define DARK_BLUE	1
#define GREEN		2
#define BLUE_GREEN	3
#define BLOOD		4
#define PURPLE		5
#define GOLE		6
#define ORIGINAL	7
#define GRAY		8
#define BLUE		9
#define HIGH_GREEN	10
#define SKY_BLUE	11
#define RED			12
#define PLUM		13
#define YELLOW		14
#define LIGHT_WHITE	15
#define BACKGROUND_WHITE	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY

// scan code 표
#define ARROW_UP    72
#define ARROW_DOWN  80
#define ARROW_LEFT  75
#define ARROW_RIGHT 77
#define ESCAPE      27

void gotoxy(int x, int y);  // 특정위치로 커서 이동하는 함수
void SetColor(int color);   // 글자 색상 설정하는 함수

int main(){
    char key;

	printf("Hello World!!\n");
	
	Sleep(1000); //프로그램 1초 정지
		
	system("cls");    //콘솔에 출력한 내용 제거

    while(1){    
        if(_kbhit()){
            key = _getch();
            switch(key){
                case ESCAPE:
                    return 0;
                case ARROW_UP:
                    printf("UP");
                    break;
                case ARROW_DOWN:
                    printf("DOWN");
                    break;
                case ARROW_LEFT:
                    printf("LEFT");
                    break;
                case ARROW_RIGHT:
                    printf("RIGHT");
                    break;
                default:
                    printf("%d", key);
            }
        }
    }
    
    system("pause");    // 콘솔환경에서 프로그램이 모두 수행한 후 강제 종료 될때 멈춰줌
    return 0;
}

//  위 -1 아래 +1 왼 -1 오 +1
void gotoxy(int x, int y) {
	COORD Pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

// 출력할 글자 색상 
void SetColor(int color){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}