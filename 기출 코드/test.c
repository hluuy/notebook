// 2023 기출문제 03회

// 3. 다음 C언어 프로그램의 출력 결과를 작성하시오
#include <stdio.h>
int main(){
    char* p = "YOUNGJIN";
    printf("%s\n", p);
    printf("%s\n", p + 1);
    printf("%c\n", *p);
    printf("%c\n", *(p + 3));
    printf("%c", *p + 1);
    return 0;
}

// 4. 다음 C언어 프로그램에서 구조체 변수를 출력하기 위하여 빈칸에 공통으로 들어갈 기호를 작성하시오.
#include <stdio.h>
int main(void){
    struct emp{
        char name[10];
        int age;
    }
    a[] = {"kihyun", 26, "woojae", 28, "subin", 32, "miyoung", 25};
    struct emp *p;
    p = a;
    p++;
    printf("%s\n", p ( 빈칸 ) name);
    printf("%d\n", p ( 빈칸 ) age);
    return 0;
}

// 9. 다음 c언어 프로그램의 입력값이 1과 100인 경우 출력 결과를 작성하시오.
#include <stdio.h>

int isPerfect(int n){
    int sum = 0;
    for(int j = 1; j<= n / 2; j++){
        if (n % j ==0) {
            sum = sum + j;
        }
    }
    return (sum == n);
}

int main(){
    int startRange, endRange, i, sum = 0;

    printf("Enter the starting range: ");
    scanf("%d", &startRange);
    printf("Enter the ending range: ");
    scanf("%d", &endRange);

    for (i = startRange; i <= endRange; i++){
        if (isPerfect(i)){
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}