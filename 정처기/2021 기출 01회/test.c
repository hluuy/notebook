// 15. 다음 C언어 프로그램의 실행 결과를 작성하시오

#include <stdio.h>
int main(void) {
    struct emp {
        char name[10];
        int age;
    }
    a[] = {"kihyun", 26, "woojae", 28, "subin", 32, "miyoung", 25};
    struct emp *p;
    p = a;
    p++;
    printf("%s\n", p->name);
    printf("%d\n", p->age);
    return 0;
}