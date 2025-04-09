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