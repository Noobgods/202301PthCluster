# 목차
> 1. 스택
> 2. 큐
> + 강의시간에 배운 것 이외에 추가로 알아 두면 좋은 것
> 3. 이분탐색

<br/>

- - -
## 1. 스택

스택은 "쌓다"라는 의미를 가진 데이터를 쌓아 올리는 선형형태의 자료구조이다.   
**후입선출** *(마지막에 삽입된 자료가 먼저 나가는)* 구조를 가지고 있다. (LIFO - Last In First Out 라고도 함)

<br/>

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
    if(empty()) {           // 비어있으면
        return false;       // 에러/예외처리
    }
    else {
        return stack[top];  // 가장 맨 위의 데이터를 반환
    }  
}
```

<br/>

### 스택을 사용하는 용도
함수 호출 (가장 먼저 나가는 것이 가장 최근에 실행한 함수가 된다.)    
실행 취소 (마지막에 실행한 것으로부터 가장 나중에 실행한 순으로 취소한다.)    

<br/><br/><br/>

- - - 
## 2. 큐

큐는 "일렬로 늘어선 줄"이라는 의미를 가진 데이터를 줄세우는 선형형태의 자료구조이다.   
**선입선출** *(먼저 삽입된 데이터가 가장 먼저 나가는)* 구조를 가지고 있다. (FIFO - First In First Out 라고도 함)   
변형큐로 원형큐(Circular Queue), 데크(Deque; Double Ended Queue)가 있다.

<br/>

### 원형큐

배열을 이용하여 큐를 사용하면 배열의 앞부분이 비게되는데, 큐가 계속 생성되면 문제가 생길 수 있다.   
이러한 단점을 해결하기 위하여 사용한 큐의 앞부분을 재활용 하는 큐의 변형이 원형큐이다.   

> 원형큐는 큐가 마지막에 도달 했을 경우 다시 앞부분에서부터 이어서 데이터를 삽입한다. 

**아래의 예에서는 기본적으로 원형큐의 구조를 가지고 설명한다.**

<br/>

### Queue의 기본 연산
Enqueue (insert) : 큐의 맨 뒤(rear)에 Data를 삽입. 큐의 종류에 따라 
```
enqueue(data){
    queue[(++rear)%MAX] = data;    // 큐의 마지막(rear)에 data를 삽입한다. MAX를 넘어가면 다시 0으로 돌아간다.
    size++;                        // 큐의 크기를 증가시킨다. (큐의 크기를 조절하는 큐일 경우 최대일때 증가)
}
```

Dequeue (delete) : 큐의 맨 앞(front)의 인덱스를 1을 더해 공간을 확보하거나 삭제한다.
```
dequeue (){
    if(isempty()) {     // 비어있으면
        return false;   // 에러/예외처리
    }
    else{
        front = (front + 1) % max;   // 큐의 앞 인덱스를 +1 하여 앞의 공간확보
        size--;                      // 큐의 크기를 감소시킨다.
    }
}
```
 
size() : 큐의 사이즈를 확인하는 연산 (size를 반환)   
empty() : 큐가 비어있는지 확인하는 연산 (size가 0이면 true 반환)   

<br/>

### 스택을 사용하는 용도
어떠한 작업/데이터를 순서대로 실행시키기 위하여 대기시킬때 사용

<br/><br/><br/>

- - - 
## 3. 이분탐색

이분탐색은 **정렬되어 있는 배열**에서 탐색 범위를 반으로 나누어 데이터를 탐색하는 방법   
중앙값을 기준으로 찾고자 하는 수를 빠르게 탐색할 수 있다.   

선형탐색과 이분탐색의 비교   
<img src="./_img/binary_and_sequential_search.gif" width="40%" height="40%" title="binarysearch" alt="binarysearch"></img>   

예제 코드
```
int binary_search(int array[], int key, int start, int end){  // (배열, 찾는 값, 시작, 끝)
    // 세개의 위치 인덱스 start, end, mid
    int mid;    // 중앙 인덱스

    while(start <= end){    // start와 end가 같거나 start가 클경우
        mid = (start + end) / 2;    // 중앙 인덱스를 start와 end의 중간으로 둔다.

        if(array[mid] == key){      // 중앙 값이 key 값과 같으면 중앙 인덱스 반환
            return mid;
        }
        else if(array[mid] > key){  // 중앙 값이 key 값보다 크면 mid의 앞을 끝으로 둔다.
            end = mid - 1;
        }
        else{                       // 중앙 값이 key 값보다 작으면 mid의 뒤를 시작으로 둔다.
            start = mid + 1;
        }
    }
    return -1;  // 못찾으면 리턴
}
```


<br/><br/><br/>
