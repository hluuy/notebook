// 12. 다음 C언어 프로그램의 실행 결과를 작성하시오

int main(void){
    int *ar[3];
    int a = 12, b = 24, c = 36;
    ar[0] = &a;
    ar[1] = &b;
    ar[2] = &c;
    printf("%d\n", *ar[1] + **ar + 1);
    return 0;
}