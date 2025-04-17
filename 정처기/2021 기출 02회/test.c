// 16. 다음 C언어 프로그램의 실행 결과를 작성하시오

int mp(int base, int exp){
    int res = 1;
    for(int i = 0; i < exp; i++){
        res = res * base;
    }
    return res;
}
int main(void){
    int res;
    res = mp(2, 10);
    printf("%d", res);
    return 0;
}

// 18. 다음 C언어 프로그램의 실행 결과를 작성하시오

int main(void){
    int arr[3];
    int sum = 0;
    *(arr + 0) = 1;
    arr[1] = *(arr + 0) + 2;
    arr[2] = *arr + 3;
    for(int i = 0; i < 3; i++){
        sum = sum + arr[i];
    printf("%d", sum);
    }
}