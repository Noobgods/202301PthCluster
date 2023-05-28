# 목차
> 1. 스택
> 2. 큐
> + 강의시간에 배운 것 이외에 추가로 알아 두면 좋은 것
> 3. 선형탐색
<br/>

- - -
## 1. 스택

스택은 "쌓다"라는 의미를 가진 데이터를 쌓아 올리는 선형형태의 자료구조이다.   
**후입선출** *(마지막에 삽입된 자료가 먼저 나가는)* 구조를 가지고 있다. (LIFO - Last In First Out 라고도 함)


### Stack의 기본 연산

empty : 스택이 비었다면 참(True)을 반환하고 비어있지 않다면 거짓(False)를 반환한다.   
```
empty(){
    if(top == 0)
        return 1;           // true
    else
        return 0;           // false
}
```

push (insert) : 스택의 가장 맨 위(top)에 데이터를 삽입한다.   
```
push(data){
    stack[top++] = data;    // 스택의 맨 위에 data를 삽입하고 top을 올림 
}
```

pop (delete) : 스택의 가장 맨 위(top)의 데이터를 삭제한다. (스택이 비어있다면 동작하지 않는다.)    
```
pop(){
    top--;                  // 메모리로 스택을 관리 할 경우 메모리를 해제한다.  
}
```

top : 스택의 가장 맨 위의 데이터를 반환한다. (스택이 비어있다면 동작하지 않는다.)
```
top(){
    if(empty()) {           // 비어있으면 동작시키면 안됨 
        return false;       // 에러 예외처리
    }
    else {
        return stack[top];  // 가장 맨 위의 데이터를 반환
    }  
}
```

<br/>

### 스택을 사용하는 예시
함수 호출 (가장 먼저 나가는 것이 가장 최근에 실행한 함수가 된다.)    
실행 취소 (마지막에 실행한 것으로부터 가장 나중에 실행한 순으로 취소한다.)    

<br/><br/><br/>

- - - 
## 2. 큐

큐는 "일렬로 늘어선 줄"이라는 의미를 가진 데이터를 줄세우는 선형형태의 자료구조이다.   
**선입선출** *(먼저 삽입된 데이터가 가장 먼저 나가는)* 구조를 가지고 있다. (FIFO - First In First Out 라고도 함)

### Queue의 기본 연산
Enqueue (insert) : 
```
enqueue (){         // enqueue
    queue[(++rear)%max] = input;
    size++;
}
```

Dequeue (delete) : 
```

```

        
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


<br/><br/><br/>

- - - 
## 3. 선형탐색



<br/><br/><br/>
