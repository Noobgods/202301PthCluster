#include <stdio.h>

int main(){
    int queue[10];
    int front=0, rear=0, max=10, num=0, menu, input;
    
    while(1){
        printf("1 : Enque\n");
        printf("2 : Deque\n");
        printf("3 : Size\n");
        printf("0 : Exit\n");
        scanf("%d", &menu);

        if (menu == 1){         // enque
            if(num >= max){
                printf("Queue is full!\n");
            }
            else{
                printf("Enque : ");
                scanf("%d", &input);

                queue[(rear++)%max] = input;
                num++;
            }
        }
        else if (menu == 2){    // deque
            if(num == 0) {
                printf("Queue is empty.\n");
            }
            else{
                printf("Deque : %d\n", queue[(front++)%max]);
                num--;
            }
        }
        else if (menu == 3){    // size
            printf("the size of the queue is %d.\n", num);
        }
        else if(menu == 0){
            break;
        }
        else{
            printf("잘못 입력하셨습니다.\n");
        }
    } 
    
    while( num >= 0){
        printf("Deque : %d\n", queue[(front++)%max]);
        num--;
    }
    return 0;
}