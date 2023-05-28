#include <stdio.h>

int main(){
    int stack[100], top = -1, menu, input, i;

    while(1){
        printf("1 : Push\n");
        printf("2 : Pop\n");
        printf("3 : Size\n");
        printf("0 : Exit\n");
        scanf("%d", &menu);

        if (menu == 1){
            printf("PUSH : ");
            scanf("%d", &input);
            stack[++top] = input;
        }
        else if (menu == 2){
            if (top < 0)   
                printf("stack is empty.\n");
            else
                printf("POP : %d\n", stack[top--]);
        }
        else if (menu == 3){
            if(top < 0) 
                printf("stack is empty.\n");
            else
                printf("the size of the stack is %d.\n", top+1);
        }
        else if(menu == 0){
            break;
        }
        else{
            printf("ERROR.\n");
        }
    } 
    
    while(top >= 0){
        printf("POP : %d\n", stack[top--]);
    }

    return 0;
}