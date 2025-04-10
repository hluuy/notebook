// 1. 다음 C언어 프로그램을 보기와 같은 입력과 출력이 되도록 빈칸에 들어갈 알맞은 코드를 작성하시오.
int main(){
    int array[5];
    for (int i = 0; i < 5; i++){
        printf("숫자를 입력해주세요");
        scanf("%d", &array[i]);
    }
    for  (int k = 0; k < 5; k++) {
        printf("%d", ( 빈칸 ));
    }
    return 0;
}

입력
숫자를 입력해주세요 : 1
숫자를 입력해주세요 : 2
숫자를 입력해주세요 : 3
숫자를 입력해주세요 : 4
숫자를 입력해주세요 : 5

출력
23451

입력
숫자를 입력해주세요 : 4
숫자를 입력해주세요 : 2
숫자를 입력해주세요 : 5
숫자를 입력해주세요 : 3
숫자를 입력해주세요 : 1

출력
25314

// 3. 다음 C언어 프로그램의 입력값이 홍길동, 김영진, 이기적의 순서일 때, 출력되는 값을 작성하시오.

#include <stdio.h>
#include <stdlib.h>
char n[30];
char *test(){
    printf("이름을 입력하세요:");
    gets(n);
    return n;
}
int main(){
    char* test1;
    char* test2;
    char* test3;

    test1 = test();
    test2 = test();
    test3 = test();

    printf("%s\n", test1);
    printf("%s\n", test2);
    printf("%s", test3);
}

// 5. 다음 C언어 프로그램의 출력 결과를 작성하시오.

#include <stdio.h>
int main(void){
    int array[3] = {70, 85, 98};
    int sum = 0;

    for (int i = 0; i < 3; i++){
        sum += array[i];
    }

    switch(sum/30){
        case 10:
        case 9: printf("A");
        case 8: printf("B");
        case 7:
        case 6: printf("C");
        default: printf("D");
    }
}

// 7. 다음 C언어 프로그램의 출력 결과를 작성하시오.
#include <stdio.h>
int main() {
    int s= 0;
    for(int i = 1; i <= 2023; i++){
        if(i % 4 == 0) s++;
    }
    printf("%d", s);
}

// 9. 다음 C언어 프로그램의 출력 결과를 작성하시오.
#include <stdio.h>
#define MAX_SIZE 10

void into(int num);
int take();
int isEmpty();
int isFull();

int isWhat[MAX_SIZE];
int point = -1;

void into(int num){
    if(isFull() == 1){
        printf("Full");
    } else {
        isWhat[++point] = num;
    }
}

int take(){
    if(isEmpty() == 1){
        printf("Empty");
        return -1;
    } else {
        return isWhat[point--];
    }
}

int isEmpty(){
    if(point == -1){
        return 1;
    } else {
        return 0;
    }
}
int isFull(){
    if(point == MAX_SIZE - 1){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int e;
    into(5);
        into(2);
        while(!isEmpty()){
            printf("%d", take());
            into(4);
                into(1);
                printf("%d", take());
            into(3);
                printf("%d", take());
                printf("%d", take());
            into(6);
                printf("%d", take());
                printf("%d", take());
        }
        return 0;
}

// 18. 다음은 C언어로 선택 정렬을 구현한 것이다. 빈칸에 들어갈 알맞은 연산자를 작성하시오.
#include <stdio.h>
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++){
            if(arr[j] (빈칸) arr[min_idx])
                min_idx = j;
        }
    swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);
    
    printf("정렬된 배열: \n");
    printArray(arr, n);
    
    return 0;
}