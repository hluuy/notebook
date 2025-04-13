// 8. 다음 C언어 프로그램의 실행 결과를 작성하시오

struct nums {
    int n;
    int g;
};
int main() {
    struct nums a[2];
    for(int i = 0; i < 2; i++){
        a[i].n = i;
        a[i].g = i + 1;
    }
    printf("%d", a[0].n + a[1].g);
    return 0;
}