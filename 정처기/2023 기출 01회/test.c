// 2. 다음 C 프로그램의 실행 결과를 작성하시오

#include <stdio.h>

int main(){
    char a[] = "YoungJin";
    char* p = NULL;
    p = a;

    printf("%s\n",a);
    printf("%c\n", *p);
    printf("%c\n", *a);
    printf("%s\n", p);

    for(int i = 0; a[i] != '\0'; i++){
        printf("%c", a[i]);
    }
}

// 3. 다음 C 프로그램의 실행 결과를 작성하시오

#include <stdio.h>
int main(){
    char* a = "Korea";
    char* b = "America";
    for(int i = 0; a[i] != '\0'; i++){
        for(int j = 0; b[j] != '\0'; j++){
            if(a[i]==b[j]) printf("%c", a[i]);
        }
    }
}

// 9. 다음 C 프로그램에서 2진수를 입력받아 10진수로 변환되어 출력되도록 (1), (2)에 들어갈 알맞은 연산자와 변수를 작성하시오.

#include <stdio.h>
int main(){
    int input;
    int d = 1; sum = 0;

    printf("이진수를 입력하세요: ");
    scanf("%d", &input);

    while(true){
        if(input==0) break;
        else{
            sum = sum + (input ( 1 )( 2 )) * d;
            d = d * 2;
            input = input / 10;
        }
    }
    printf("%d", sum);
    return 0;
}