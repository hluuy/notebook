// 19. 다음 C언어 프로그램의 실행 결과를 작성하시오

int main() {
    char *p = "KOREA";
    printf("%s\n", p);
    printf("%s\n", p+3);
    printf("%c\n", *p);
    printf("%c\n", *(p+3));
    printf("%c", *p+2);
}