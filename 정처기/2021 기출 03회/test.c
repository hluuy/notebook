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

// 17. 다음 C언어 프로그램의 실행 결과를 작성하시오

struct std{
    char name[12];
    int pro, db, sum1, sum2;
};
int main(){
    struct std st[3] = {{"영수", 95, 88}, {"철수", 84, 91}, {"앨리스", 86, 75}};
    struct std* p;
    p = &st[0];
    (p+1) -> sum1 = (p+1) -> pro + (p+2) -> db;
    (p+1) -> sum2 = (p+1) -> sum1 + p -> pro + p -> db;
    printf("%d\n", (p+1) -> sum1 + (p+1) -> sum2);
    return 0;
}