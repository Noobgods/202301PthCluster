# 목차
> 1. 구조체
> 2. 선형탐색
> 3. 버블정렬
> + 강의시간에 배운 것 이외에 추가로 알아 두면 좋은 것
> 4. 선택정렬
> 5. 삽입정렬
<br/>

- - -
## 1. 구조체

### 구조체 기본구조
```
struct {구조체 이름} {
    {멤버변수1 타입} {멤버변수1 이름}
    {멤버변수2 타입} {멤버변수2 이름}
    .
    .
    .
} {구조체 변수 이름};
```
```
struct student{
    int number;
    char name[20];    
}students;
```
사용자가 새롭게 다양한 타입의 변수 집합을 자료형으로 생성하는 것이 구조체   
구조체 안의 변수들은 멤버변수라 불린다.   
또한 구조체는 다른 프로그래밍 언어에서 멤버변수뿐만 아니라 멤버함수를 추가하여 클래스라는 명칭으로 부른다.   

<br/>

구조체를 구문에서는 아래와 같이 변수를 생성한다.
```
struct {구조체 이름} {구조체 변수 이름}
```
```
struct student students;
```

구조체를 사용하기 전에 struct 키워드를 매번 입력해야 하기 때문에 typedef와 같이 사용하는 것이 좋다.
```
typedef strcut{
    {멤버변수1 타입} {멤버변수1 이름}
    {멤버변수2 타입} {멤버변수2 이름}
    .
    .
    .
} {구조체 이름};
```

### 구조체의 멤버변수
구조체의 멤버변수를 구문에서 사용하기 위해 '.'특수문자를 사용한다.
```
{구조체 변수 이름}.{멤버변수 이름}
```
```
students.number = 20011;
```


<br/><br/><br/>

- - - 
## 2. 선형탐색

선형탐색은 단순히 배열의 0번부터 배열의 끝까지 모두 탐색하는 방법이다.
```
int linear_search(int array[], int size, int key){
    int i = 0;                  // 인덱스
    
    for(i = 0; i < size; i++){  // 배열의 모든 요소 접근
        if(array[i] == key){    // 키값과 배열의 값이 같으면
            return i;           // 찾은 값이 있는 인덱스 리턴
        }
    }
    return -1;                  // 없는경우 -1 리턴(인덱스는 0<=i 기 때문에 음수가 나오지 않음)
}
```

<br/><br/><br/>

- - - 
## 3. 버블정렬

버블탐색은 인접한 두 개의 원소를 비교하여 조건에 맞게 자리를 교환하면서 올라온다.  
정렬하고자 하는 수가 거품처럼 조금씩 올라오는 모습을 보이기 때문에 버블탐색이라는 이름이 붙여졌다.   

버블정렬의 과정을 보여주는 GIF   
<img src="./_img/bubble_sort.gif" width="40%" height="40%" title="bubblesort" alt="bubblesort"></img>   

예제 코드   
```
void bubbleSort(int array[], int size){
    int i, j;

    for(i = 1; i < size; i++) {                 
        // 1번째 반복문으로 반복 횟수 설정 
        // (인접한 것을 비교하기 때문에 size-1 반복)
        for(j = 0; j < size - i; j++) {         // 2번째 반복문으로 정렬되지 못한 배열의 인접한 요소 탐색
            if(array[j] > array[j + 1]) {       // 앞의 수가 뒤의 수보다 크면 (오름차순으로 정렬하기 위해)
                swap(&array[j], &array[j + 1]); // 두 수를 교환한다.
            }
        }
    }
}
```


<br/><br/><br/>

- - - 
## 4. 선택정렬

선택정렬은 순차적으로 선택한 인덱스에 배열의 요소를 모두 비교하여 가장 작거나 큰 요소를 찾아 두 수를 교환하는 방법이다.   
매 반복에 가장 작거나 큰 요소가 순서대로 놓이게 되고 그 요소는 비교를 하지 않는다.   

선택정렬의 과정을 보여주는 GIF   
<img src="./_img/selection_sort.gif" width="40%" height="40%" title="bubblesort" alt="bubblesort"></img>   

예제코드
```
void selectionSort(int array[], int size){
    int i, j, least;

    for(i = 0; i < size - 1; i++) {             
        // 해당 i에 가장 작은 수가 위치하기 위해 사용할 반복문 
        // (앞의 요소들이 이미 정렬이 끝나서 마지막 수는 가장 큰 수가 되기 때문에 size-1 반복)
        least = i;                              // 가장 작은 수의 인덱스를 저장할 변수, 찾기전 i를 가장 작은 수로 지정

        for(j = i+1; j < size; j++){            // i의 뒤에서 끝까지 가장 작은 수를 찾는 반복
            if(array[least] > array[j]){        // array[j]보다 array[least]가 작으면
                least = j;                      // 가장 작은 수의 인덱스를 least에 저장
            }
        }

        if(least != i){                         // 처음에 고른 i가 가장 작으면 교환하지 않음
            swap(&array[least], &array[i]);     // i 위치와 least를 교환해서 앞에 작은 수가 오게한다.
        }
    }
}
```

<br/><br/><br/>

- - - 
## 5. 삽입정렬

키값이 되는 요소를 앞의 정렬된 요소들과 비교하여 알맞는 위치에 삽입하는 정렬방법   
삽입, 버블정렬과 섞인 느낌이지만 정렬되어 있는 배열의 끝까지 가지 않아도 되기 때문에 평균적으로 효율이 좀 더 좋다.   

삽입정렬의 과정을 보여주는 GIF   
<img src="./_img/insertion_sort.gif" width="40%" height="40%" title="bubblesort" alt="bubblesort"></img>   

예제 코드
```
void insertionSort(int array[], int size){
    int i, j, key;

    for(i = 1; i < size; i++){                              
        // 키 값이 될 요소를 고르고 반복
        // (맨 앞의 키값 0은 처음에 1과 비교하기 때문에 size -1 번반복)

        key = array[i];                                 // 위치를 옮길 키값을 key 변수에 대입

        for(j = i; j > 0 && array[j - 1] > key; j--){   
            // j는 키값의 위치에서 부터 1까지 실행(인접한 요소와 비교하기 때문에 0은 1과 비교),  
            // 비교할 이전의 요소보다 key값이 작으면 앞의 위치는 탐색할 필요 없기 때문에 반복문 종료 (j는 키값이 들어갈 위치) 

            array[j] = array[j - 1];                    // 앞의 요소를 뒤로 이동 
        }

        array[j] = key;                                 // 저장해놓은 키 값을 j에 삽입
    }
}
```
